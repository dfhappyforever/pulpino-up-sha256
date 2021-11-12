#!/bin/bash
# XILINX_HOME must be set for vivado:
# Assume Vivado 2020.2 is installed at /home/USERNAME/vivado/2020.2
# For bash:
#   export XILINX_HOME=/home/USERNAME/vivado/2020.2
if [ ! -n "$XILINX_HOME" ]; then
    echo [ERROR]: XILINX_HOME not set. 
    echo For bash: export XILINX_HOME="your vivado install location"
    echo Assume you are using bash, and Vivado 2020.2 is installed at /home/USERNAME/vivado/2020.2
    echo You have to run this command before sourcing "${BASH_SOURCE[0]}"
    echo   export XILINX_HOME=/home/USERNAME/vivado/2020.2
else
    echo Macro setup pass
    export VIVADO_HOME=$XILINX_HOME/Vivado/2020.2
    export VITIS_HOME=$XILINX_HOME/Vitis_HLS/2020.2
    export XILINX_VIVADO=$VIVADO_HOME
    export PATH=$VIVADO_HOME/bin:$VITIS_HOME/bin:$VITIS_HOME/gnu/microblaze/lin/bin:$VITIS_HOME/gnu/arm/lin/bin:$VITIS_HOME/gnu/microblaze/linux_toolchain/lin64_be/bin:$VITIS_HOME/gnu/microblaze/linux_toolchain/lin64_le/bin:$XILINX_HOME/DocNav:$PATH
fi
