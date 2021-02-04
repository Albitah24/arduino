
const int ledPin=4;
const int buttonPin=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  //
  pinMode(buttonPin, INPUT);
}

void loop() {
  int switchState = 0;
  // leer el estado del botón
   switchState = digitalRead(buttonPin);
 if (switchState == HIGH){
  // el botón sí esta pulsado
  digitalWrite(ledPin,HIGH);
  delay(1);
  digitalWrite(ledPin,LOW);
  delay(5);
 }
else{
  digitalWrite(ledPin,HIGH);
  }//llave del else
}//vuelve al inicio del bucle (lleva del loop() )
