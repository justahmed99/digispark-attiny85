// This script will execute Windows shutdown command from PowerShell
// This script only run in Microsoft Windows operating systems

#include "DigiKeyboard.h"
 
void setup() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R | 0, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("shutdonw /s");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
}
 
void loop() {
  
}