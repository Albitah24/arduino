
/*Name: Alba Guimerans
 * Data: 18/3/2021
 * Que hace el programa?: Utilizando el potenciómetro y el led2 deseo que si muevo el 
 * potenciómetro el led tenga más o menos potencia.
 * 
 */
int potVal;
int const potPin = A1;
const int ledpin2 = 9; 
int valorLed;

int pin2Value;
void setup() {

 pinMode(ledpin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
potVal = analogRead(potPin);

pin2Value = map(potVal,0,1023,0,255);
analogWrite(ledpin2, pin2Value );

}
