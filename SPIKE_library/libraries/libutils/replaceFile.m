function replaceFile(fileName,oldWord,newWord)
%File read
fileID = fopen(fileName, 'r');
fileContent = fread(fileID, '*char')';
fclose(fileID);

newContent = strrep(fileContent, oldWord, newWord);

% Write new code
fileID = fopen(fileName, 'w');
fwrite(fileID, newContent, 'char');
fclose(fileID);
end