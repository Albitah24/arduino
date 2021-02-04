const int sensorPin = A0;
const float baselineTemp = 24.0;
void setup(){
  // put your setup code here, to run once:
  Serial.begin(9600); //abre un puerto en serie
  for(int pinNumber = 2; pinNumber<5; pinNumber++){
    pinMode(pinNumber, LOW);
    digitalWrite(pinNumber, LOW);
  }
}
void loop(){
  //mandar mensaje de temperatura 
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  
// convierte la lectura del ADC a voltaje
float voltage = (sensorVal/1024.0) * 5.0;
Serial.print(", Valor del sensor: ");
Serial.print(sensorVal);
// Convertir la lectura en voltaje
Serial.print(", degrees C: ");
// Pasamos a grados centígrados
float temperature = (voltage - .5) * 100;
Serial.println(temperature);
if(temperature < baselineTemp){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  Serial.println("frio");
}else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4){
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW); 
}else if(temperature >= baselineTemp+4 && temperature > baselineTemp+6){
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW); 
}else if(temperature >= baselineTemp+6){
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);  
}
delay(100);
}
