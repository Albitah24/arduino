// Definir variables
const int PinInterruptor = 8;
unsigned long TiempoPrevio = 0;
int EstadodelInterruptor = 0;
int EstadoPreviodelInterruptor = 0;
int indexLed = 0;
const int ledPinsOrdered[] ={
  2,
  5,7,4,3,6
};

long TiempoIntervalocadaLed = 2000; // Tiempo indicado en milisegundos, por tanto 10 segundos

// Configurar la placa Arduino
void setup() {
  for(int x = 2;x<8;x++){
    pinMode(x, OUTPUT);
   }
    pinMode(PinInterruptor, INPUT);
}
    
// Ejecucion del programa
void loop() {
  unsigned long TiempoActual = millis();
  if(TiempoActual - TiempoPrevio > TiempoIntervalocadaLed){
    TiempoPrevio = TiempoActual;
    digitalWrite(ledPinsOrdered[indexLed], HIGH);
    indexLed++;
    if(indexLed == 6){

      tone
      
    }
    
    
  }
  EstadodelInterruptor = digitalRead(PinInterruptor);
  if(EstadodelInterruptor != EstadoPreviodelInterruptor){
    for(int x = 2;x<8;x++){
      digitalWrite(x, LOW);
    }
    indexLed = 0;
    TiempoPrevio = TiempoActual;
  }
  EstadoPreviodelInterruptor = EstadodelInterruptor;
}  
// Volver al comienzo del programa
