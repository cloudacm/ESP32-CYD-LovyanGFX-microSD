# ESP32-CYD-LovyanGFX-microSD
Demo code used as an intro to CYD developement

The code at the bottom of this post will be provided that makes use of the display and memory card for data storage, which was built using the Arduino IDE.  The changes made to the repurposed code is the use of the SPI, FS, and SD libraries which was used in earlier ESP32-Cam posts.   In addition, the LovyanGFX library will be used to drive the display.  The firmware makes use of macros to help with the readability of the code.

const char* FileName = "/DataLogFile.txt";
#define LogData(FileContent) appendFile(SD, FileName, FileContent)
...
LogData("This is data written to the micro SD media"); 

Added to the code is a function that queries the public internet address if the internet access is successful.  The MQTT subscription has been expanded to initiate that query on demand.  There is an additional subscription to realtime epoch timestamp data that can be stored on the microSD log file.

The LovyanGFX library (https://github.com/lovyan03/LovyanGFX) is extensive and this demo is extremely simplistic with the intent to gain inroads into its functionality.  There is mention online about limitations with the CYD supporting the display, touch control, and SD card module together, see (https://github.com/AndroidCrypto/ESP32_CYD_Display_with_Touch_and_SD_Card).  For the sake of ease, touch functions will not be used in this demo.

These sources were referenced in the development of this demo:
https://github.com/lovyan03/LovyanGFX
https://github.com/AndroidCrypto/ESP32_CYD_Display_with_Touch_and_SD_Card
https://github.com/dazzor/photoframe/blob/main/CYDusingLovyanGFX
https://medium.com/@androidcrypto/how-to-use-touch-and-sd-card-at-the-same-time-on-an-esp32-cheap-yellow-display-cyd-45fa55d01ffe
https://randomnerdtutorials.com/esp32-cyd-display-touchscreen-microsd-card/
