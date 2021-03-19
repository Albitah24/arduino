
/*Name: Alba Guimerans
 * Data: 19/3/2021
 * Que hace el programa?: problema 1, se enciende el led3 y despues de unos segs
 * se encienden los otros dos.
 * 
 */
const int potPin = A0;
const int botonPin = 6; // botón cable amarillo
const int botonPin2 = 7; // botón cable azul
const int ledPin = 5;  // led azul
const int ledPin1 = 9;  // led verde
const int ledPin2 = 10; // led rojo


void setup() {
 pinMode(ledPin2, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  

}
