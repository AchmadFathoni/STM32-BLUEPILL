A working example of platformio project for programming Bluepill microcontroller via USB. You must install Maple firmware into you Bluepill first.

**Note**
After uploading you program, the LED will blink and you need to hit the reset button immediatly to complete the upload.

If you not see this then your upload is failed
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
