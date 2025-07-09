function copyspikert(mode)
% mode = 1, Transfer files
% mode = 2, Transfer and Build
% mode = 3, Write
% Usually use mode = 2 and then mode = 3.
% >> copyspikert(2);
% >> copyspikert(3);
    SPIKElibraryFol=fileparts(mfilename('fullpath'));
    for i=1:3
        [SPIKElibraryFol, ~, ~] = fileparts(SPIKElibraryFol);
    end
    appname = convertCharsToStrings(bdroot);
    
    RootDirectory=SPIKElibraryFol+"\SPIKE_library";
    CygwinFol="C:\cygwin64\bin\bash";
    SourceFol=SPIKElibraryFol+"\Source";
    libraryFol=RootDirectory+"\libraries";
    SPIKERTFol=SourceFol+"\programs\"+appname;
    WriterFol=RootDirectory+"\tool\SpikeDfuWriter\src";

    if ((mode == 1)||(mode == 2))% Transfer files to WSL2/Ubuntu        
        %Code Generation
        cfg = Simulink.fileGenControl('getConfig');
        OriginalCodeGenFolder = cfg.CodeGenFolder;
        cfg.CodeGenFolder = RootDirectory+"\temp";
        Simulink.fileGenControl('setConfig', 'config', cfg);
        slbuild(bdroot)
        cfg.CodeGenFolder = OriginalCodeGenFolder;
        Simulink.fileGenControl('setConfig', 'config', cfg);

        %Remove & make SPIKE RT foloder 
        if exist(SPIKERTFol,'dir')
            rm_status = rmdir(SPIKERTFol,'s');
            if rm_status==0
                msgbox("Please close any files in SPIKERTFol!");
                return
            end
        end
        mk_status = mkdir(SPIKERTFol);
        pause(1); %Wait for completing the folder

        %copy files
        if mk_status
            copyfile(RootDirectory + "\temp\" +appname + "_ert_rtw\" + appname +".c", SPIKERTFol);
            copyfile(RootDirectory + "\temp\" + appname + "_ert_rtw\" + appname + ".h", SPIKERTFol);            

            copyfile(RootDirectory + "\libraries\libspikert\slapp.cdl", SPIKERTFol+"\"+appname+".cdl");
            copyfile(RootDirectory + "\libraries\libspikert\slapp.cfg", SPIKERTFol+"\"+appname+".cfg");
            copyfile(RootDirectory + "\libraries\libspikert\build_SPIKE.sh", libraryFol+"\build_SPIKE.sh");
            replaceFile(SPIKERTFol + "\" + appname + ".cfg",'slapp',appname)

            %Find Model reference block
            modelRefs = find_system(bdroot, 'BlockType', 'ModelReference');
            if length(modelRefs)>0
                copyfile(RootDirectory + "\temp\slprj\ert\_sharedutils\*.h", SPIKERTFol);
                copyfile(RootDirectory + "\temp\slprj\ert\_sharedutils\*.c", SPIKERTFol);

                for i = 1:length(modelRefs)
                    blockPath = modelRefs{i};
                    referencedModel = get_param(blockPath, 'ModelName');
                    copyfile(RootDirectory + "\temp\slprj\ert\" + referencedModel + "\*.h", SPIKERTFol);
                    copyfile(RootDirectory + "\temp\slprj\ert\" + referencedModel + "\*.c", SPIKERTFol);
                end

                SourceList = dir(SPIKERTFol+"\*.c");
                APPLCOBJS='-U "';
                SpaceLetter='';
                for i = 1:length(SourceList)
                    if ~strcmp(SourceList(i,:).name,[bdroot,'.c'])
                        APPLCOBJS=[APPLCOBJS,SpaceLetter,strrep(SourceList(i,:).name,'.c','.o')];
                        SpaceLetter=' ';
                    end
                end
                APPLCOBJS=[APPLCOBJS,'"'];
                replaceFile(libraryFol+"\build_SPIKE.sh",'$APPLCOBJS$',APPLCOBJS);
            else
                replaceFile(libraryFol+"\build_SPIKE.sh",'$APPLCOBJS$','');
                tmpfile = RootDirectory + "\temp\" +appname +"_ert_rtw\" + "rtwtypes.h";
                if exist(tmpfile)
                    copyfile(RootDirectory + "\temp\" +appname +"_ert_rtw\" + "rtwtypes.h", SPIKERTFol);
                end

                tmpfile = RootDirectory + "\temp\" + appname + "_ert_rtw\" + "zero_crossing_types.h";
                if exist(tmpfile)
                    copyfile(RootDirectory + "\temp\" + appname + "_ert_rtw\" + "zero_crossing_types.h", SPIKERTFol);
                end
            end

            if (mode == 2) %Build
                cmd = CygwinFol + " --login -c ""cd /cygdrive/"+replace(replace(SourceFol,":\","/"),"\","/")+" && sh build_SPIKE.sh "+ appname + """";
                try
                    [status, cmdout] = system(cmd);
                    if status == 0
                        disp('The build has been executed.');
                        disp(cmdout);
                    else
                        disp('An error occurred during the build.');
                        disp(cmdout);
                    end
                catch ME
                    disp(['An error has occurred:', ME.message]);
                end 
            end
        end
    end
    
    if (mode == 3) %Write
        currentFolder = pwd;
        try
            cd(WriterFol)
            cmd = "SpikeDfuWriter -b" + SPIKERTFol + "\asp.bin";
            [status, cmdout] = system(cmd);
            if status == 0
                disp('The write has been executed.');
                disp(cmdout);
            else
                disp('An error occurred during writing.');
                disp(cmdout);
            end
        catch ME
            disp(['Error while writing:', ME.message]);
        end
        cd(currentFolder);
    end

    if (mode == 4) %initialize
        currentFolder = pwd;
        try
            cd(WriterFol)
            [WriterbinFol, ~, ~] = fileparts(WriterFol);
            cmd = "SpikeDfuWriter -b" + WriterbinFol + "\spike-3.bin";
            [status, cmdout] = system(cmd);
            if status == 0
                disp('The initialization has been executed.');
                disp(cmdout);
            else
                disp('An error occurred during initialization.');
                disp(cmdout);
            end
        catch ME
            disp(['Error while writing:', ME.message]);
        end
        cd(currentFolder);
    end
end