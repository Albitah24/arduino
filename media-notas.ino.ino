/*
*  Documentación del programa 
*  Autore:Alba Guimerans
*  Fecha: 8/03/2021
*  Código referencia:
*  Descripción del programa: 
*calcula una media de notas
*  
*  
*  Hardware necesario: NINGUNO
*/


int notas[] = {5, 8, 9, 4, 3};
int numeroNotas =5;

void setup() {
 int sumaNotas= 0;
 for (int i=0 ; i< numeroNotas; i++){
  sumaNotas = sumaNotas + notas[i];
  // suma notas = sumaNotas notas[0]
  // sumaNotas = sumaNotas + sumaNotas [1]
  // asi repetitibamente sumando +1 hasta que se quede sin elementos.
 }
 float mediaNota = sumaNotas/numeroNotas;
 Serial.begin(9600);
 Serial.print("NOTA MEDIA:");
 Serial.println(mediaNota);

}

void loop() {
  // put your main code here, to run repeatedly:

}
