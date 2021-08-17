// In this example, the script will execute WIN+R keystroke then open up notepad.exe once as we define these commands in void setup()
// Then, the program will always type a text on the notepad

#include "DigiKeyboard.h"
 
void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R | 0, MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("notepad");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);  
}
 
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("This is JUSTAHMED99");
  DigiKeyboard.delay(1000);
}