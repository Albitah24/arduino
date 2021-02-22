
// keyValue = tecla <- analogRead(A0)  0,75,160,250
// tecla == 1023  (75<- tecla{1010, 990)(160<- tecla{505, 515)(250<- tecla{5, 10)

//const int switchPin = 2;
const int motorPin = 9;

int teclaValue = 0;
int motorValue = 0;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // leer el potenciómetro
teclaValue = analogRead(A0);
Serial.println(teclaValue);
  // transformar el valor del potenciómetro en valor del motor
  
  // aplicarlo
  
 //botón 0 ohm
  if(teclaValue == 1023){
    analogWrite(motorPin, 0);
    
Serial.println("apagar");
  }
  else if(teclaValue >= 990 && teclaValue <=1010){
   analogWrite(motorPin, 75);
  }
  else if(teclaValue >= 505 && teclaValue <= 515){
    analogWrite(motorPin, 160);
  }
  else if(teclaValue >= 5 && teclaValue <=10){
    analogWrite(motorPin, 250);
  }
 
  }
