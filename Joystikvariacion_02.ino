//*  Documentación del programa 
//*  Autore: Alba
//*  Fecha: 2/3/2021
//*  Código referencia: (url)
//*  Descripción del programa:
// Hardware necesario:


//Definiciones de constantes de pines
const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 

const int pinLed = 9;

int valorEjeX = 0;

void setup() {
//inicializaciones
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  Serial.begin(9600);

}

void loop() {
 valorEjeX = analogRead(pinEjeX);
  if (valorEjeX > 800){
    digitalWrite(pinLed, HIGH);
  }
else{
  digitalWrite(pinLed, LOW);
}
}
