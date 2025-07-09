#!/bin/sh
BUILD_DIR=${BUILD_DIR:-build}
JOB_NUM=${JOB_NUM:-$(nproc)}

if [ "$1" = "" ]; then
	    echo "no argument"
	    exit 1
fi
appname=$1

cd Source
if [ ! -e "programs/${appname}" ]; then
	  echo "Such a '${appname}' dosen't exit."
	  exit 1
fi

cd spike-rt
cd build

if [ ! -e "obj-primehub_${appname}" ]; then
	  mkdir -p obj-primehub_$appname
	  (cd obj-primehub_$appname && ../../asp3/configure.rb -T primehub_gcc -L ../obj-primehub_kernel -a ../../../programs/$appname/ -A $appname -m ../../common/app.mk )
fi

cd obj-primehub_$appname

rm -rf asp asp.bin && make && make asp.bin && cp asp.bin ../../../programs/$appname/asp.bin