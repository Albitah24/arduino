#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState= 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Que dice");
  lcd.setCursor(0, 1);
lcd.print ("la bola");
}

void loop() {
 switchState = digitalRead(switchPin);
 if (switchState != prevSwitchState){
  if (switchState == LOW){
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("La bola dice:");
    switch(reply){
      case 0:
      lcd.print("SI");
      break;
      case 1:
      lcd.print("Puede se");
      break;
      case 2:
      lcd.print("Aceptamos pulpo como animal de compañia");
      break;
      case 3:
      lcd.print("Tiniene buena pinta");
      break;
      case 4:
      lcd.print("No puedo, tengo furbo");
      break;
      case 5:
       lcd.print("Kas dixo?");
      break;
      case 6:
       lcd.print("TENGO MIEDO!");
      break;
      case 7:
       lcd.print("NO");
      break;
    }
  }
 }
 prevSwitchState = switchState;
}
