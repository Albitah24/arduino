
/*Name: Alba Guimerans
 * Data: 18/3/2021
 * Que hace el programa?: Utilizamos un boton para encender y 
 * el otro para apagar  el led2 
 * 
 */


const int botonPin = 7;
const int botonPin2 = 5;
const int ledpin2 = 9;
int estadoBoton1 =0;
int estadoBoton2 =0;

void setup() {
pinMode(ledpin2, OUTPUT);
pinMode(botonPin, INPUT);
pinMode(botonPin2, INPUT);
Serial.begin(9600);
}

void loop() {
  
estadoBoton1 = digitalRead(botonPin);
estadoBoton2 = digitalRead(botonPin2);

if (estadoBoton1 == HIGH) {
digitalWrite(ledpin2, HIGH);

}
if (estadoBoton2 == HIGH) {
digitalWrite(ledpin2, LOW);

}




}
