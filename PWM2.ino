//Variables globales
bool isTheButtonBeingPressed = false;
int switchState = 0;
int delayMillis = 0;
//Variable de los pines
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
  //Revisamos si es el primer loop donde el botón está pulsado
  if (true)
  {
    isTheButtonBeingPressed == true;
    delayMillis ++;
  }
  // el botón sí esta pulsado
  digitalWrite(ledPin,HIGH);
  delay(1);
  digitalWrite(ledPin,LOW);
  delay(5);
 }
else{
   isTheButtonBeingPressed == false;
 }//llave del else
  digitalWrite(ledPin,HIGH);
   delay(1);
   digitalWrite(ledPin,LOW);
   delay(delayMillis);
 //RESET
   if (delayMillis>15){
    delayMillis = 0;
   }
}//vuelve al inicio del bucle (lleva del loop() )
