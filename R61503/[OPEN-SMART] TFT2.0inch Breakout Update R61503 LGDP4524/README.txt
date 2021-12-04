If you have any questions, please contact us: catalex_inc@163.com
/***********************************************************************/
STEP1:
  Unzip the compressed package to your own project.

STEP2:
  Copy the two file folders in the directory of Arduino library and put them into the directory of your Arduino IDE libraries,
  such as D:\arduino-1.6.5-r2\libraries.

STEP3: How it should be connected to arduino uno and mega?
  //***********************************************//
// If you use OPEN-SMART TFT breakout board                 //
// Reconmmend you to add 5V-3.3V level converting circuit.
// Of course you can use OPEN-SMART UNO Black version with 5V/3.3V power switch,
// you just need switch to 3.3V. http://www.dx.com/p/open-smart-uno-atmega168p-development-board-for-arduino-uno-r3-450226#.WLjM4rf9cY8
// The control pins for the LCD can be assigned to any digital or
// analog pins...but we'll use the analog pins as follow.
//----------------------------------------|
// TFT Breakout  -- OPEN-SMART UNO Black
// GND              -- GND
// 3V3              -- 3.3V
// CS               -- A3
// RS               -- A2
// WR               -- A1
// RD               -- 3.3V
// RST              -- A0
// LED              -- GND
// DB0              -- 8
// DB1              -- 9
// DB2              -- 10
// DB3              -- 11
// DB4              -- 4
// DB5              -- 13
// DB6              -- 6
// DB7              -- 7

STEP4: Restart the Arduino IDE, and select the correct board type and serial com port.

STEP5: Open the examples files in the directory of  ..\libraries\UTFT\examples\OPEN-SMART TFT.
           Upload the sketch code to the Arduino board, then you can enjoy your TFT.
