# FM_ECS_MiniZed_DAQ
This repo elaborates upon on the the design process and contains the code which was used while designing the DAq system for 2021-22 season. 

Unless mentioned otherwise,follow all the steps mentioned in the HW Lab 2 PDF,given in the this repo for the first 2 two PDFs.You are meant to follow everything uptil but not including expt 3.This applies to ALL projects,unless mentioned otherwise.

NEVER USE QSPI AND UART TOGETHER.You won't be able to print anything on the SDK terminal,as they share the same microUSB port on board.
Select the correct DRAM memory part number on the Vivado software,which is MT41K256M16RE-125.None of your codes will work otherwise.

If your synthesis doesn't work,try generating output products again.
READ THE GUIDE TO FPGA DEV ON MINIZED before desiging.

You have to enable QPSI first during uploading.While programming flash on the Xilinx SDK,choose qspi-x1-dual stacked,else your flash operation wont work.

REFER TO Xilinx MASTER XDC and the Pinout mentioned here,for FPGA routing.

PINOUT:https://www.xilinx.com/support/packagefiles/z7packages/xc7z007sclg225pkg.txt

MASTER XDC:https://github.com/Avnet/hdl/blob/master/Boards/MINIZED/minized_pins.xdc
