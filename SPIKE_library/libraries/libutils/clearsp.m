function clearsp

if exist('slprj', 'dir') ~= 0
rmdir slprj s;
end

if exist('slapp_ert_rtw', 'dir') ~= 0
rmdir slapp_ert_rtw s;
end

if exist('slapp.slxc', 'file') ~= 0
delete slapp.slxc;
end