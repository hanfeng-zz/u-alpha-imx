#!/bin/bash

arch=arm
cross_compile=arm-none-linux-gnueabihf-
defconfig=mx6ul_14x14_evk_defconfig
cross_compile_path=/home/hf/toolchains/arm-gnu-toolchain-13.3.rel1-x86_64-arm-none-linux-gnueabihf

export PATH=$PATH:${cross_compile_path}/bin


echo "0:distclean"
echo "1:build"


read -p "键入数字:" num

echo "${num}"

if [ ${num} == "0" ];
then
	echo "make distclean"
elif [ ${num} == "1" ];
then
	echo "make ARCH=${arch} CROSS_COMPILE=${cross_compile} ${defconfig}"
	make ARCH=${arch} CROSS_COMPILE=${cross_compile} ${defconfig}
elif [ ${num} == "2" ];
then
	echo "make  ${defconfig}"
	make ${defconfig}
else
	echo "failed"
fi
