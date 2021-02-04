//Variables globales
bool isTheButtonBeingPressed = false;
int switchState = 0;
int intensity = 0;
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
  //leer el estado del botón
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    //Revisamos si es el primer loop donde el botón está pulsado
    if (isTheButtonBeingPressed == false)
    {
      isTheButtonBeingPressed = true;
      intensity = intensity +16;
      //RESET
      if (intensity >255) {
        intensity = 0;
      }
    }
    //el botón si esta pulsado
  }
  else{
    isTheButtonBeingPressed = false;
  }//llave del else
  analogWrite(ledPin,intensity);
}//vuelve 
