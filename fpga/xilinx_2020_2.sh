#!/bin/bash
#you need to set the PATH for vivado:export XILINX_HOME="your vivado install location", example is as follows:
#export XILINX_HOME=/home/SystemUser/vivado/2020.2
if [ ! -n "$XILINX_HOME" ]; then
	echo [ERROR]:XILINX_HOME does not exist, please set. etc:export XILINX_HOME="your vivado install location"
	exit 1
else
        echo Macro setup pass
fi
export VIVADO_HOME=$XILINX_HOME/Vivado/2020.2
export VITIS_HOME=$XILINX_HOME/Vitis_HLS/2020.2
export XILINX_VIVADO=$VIVADO_HOME
export PATH=$VIVADO_HOME/bin:$VITIS_HOME/bin:$VITIS_HOME/gnu/microblaze/lin/bin:$VITIS_HOME/gnu/arm/lin/bin:$VITIS_HOME/gnu/microblaze/linux_toolchain/lin64_be/bin:$VITIS_HOME/gnu/microblaze/linux_toolchain/lin64_le/bin:$XILINX_HOME/DocNav:$PATH
