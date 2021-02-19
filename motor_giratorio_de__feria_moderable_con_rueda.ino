//const int switchPin = 2;
const int motorPin = 9;

int potenciometerValue = 0;
int motorValue = 0;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // leer el potenciómetro
potenciometerValue = analogRead(A0);
  // transformar ek valor del potenciómetro en valor del motor
  motorValue = potenciometerValue /4;
  // aplicarlo
  analogWrite(motorPin, motorValue);
}
 
