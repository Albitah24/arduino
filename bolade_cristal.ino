#inlude <LiquidCeystal.h>
LiquidCeystal lcd(12, 11, 5, 4, 3, 2);
const int lcd(switchPin = 6;);
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
  // put your main code here, to run repeatedly:

}
