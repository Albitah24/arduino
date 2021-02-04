int sensorValue;
int sensorLow = 1023;
int sensorHigh;
const int ledPin = 13;

int switchState=0;
bool isTheButtonBeingPressed= false;
bool pimPimFlag = false;

int buttonPin=5;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);
while (millis() < 5000) {
sensorValue = analogRead(A0);
if(sensorValue = sensorHigh) {  
}
if(sensorValue < sensorLow) {
  sensorLow = sensorValue;
}
}

digitalWrite(ledPin,LOW);
}
void loop() {
 checkButton();
 if (play){
  sound();
 }
}

void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed= true;
    }
  }
  else{
    isTheButtonBeingPressed = false;
  }
}
