A working example of platformio project for programming Bluepill microcontroller via USB. You must install Maple[^1][^2] firmware into you Bluepill first.

**Note**
* After uploading you program, the LED will blink and you need to hit the reset button immediatly to complete the upload.
* You need lib32-zlib on Archlinux or lib32z1 on Ubuntu
* If you not see this then your upload is failed
```
Determining device status: state = dfuIDLE, status = 0
dfuIDLE, continuing
DFU mode device DFU version 0110
Device returned transfer size 1024
bytes_per_hash=391
Copying data from PC to DFU device
Starting download: [##################################################] finished!
state(8) = dfuMANIFEST-WAIT-RESET, status(0) = No error condition is present
Done!
Resetting USB to switch back to runtime mode
Waiting for /dev/ttyACM1 serial...Done
```
[^1][Linux](https://sites.google.com/view/makeriot2020/home/tutorials/stm32-blue-pill/using-native-usb-port-on-stm32-blue-pill)
[^2][Windows](https://circuitdigest.com/microcontroller-projects/programming-stm32f103c8-board-using-usb-port)
