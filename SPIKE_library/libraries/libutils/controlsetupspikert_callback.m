function controlsetupspikert_callback()

% Set model configuration parameters
set_param(bdroot, 'SolverType', 'Fixed-step');
set_param(bdroot, 'SystemTargetFile', 'ert.tlc');
set_param(bdroot, 'GenCodeOnly', 'on');
set_param(bdroot, 'IncludeMdlTerminateFcn','off');
set_param(bdroot, 'ERTCustomFileTemplate','addspikertmain.tlc');
set_param(bdroot, 'PostCodeGenCommand','');
set_param(bdroot, 'ERTFilePackagingFormat', 'Compact');

end