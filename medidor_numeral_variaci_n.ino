
float notas[] ={ 8.5, 6.3, 2.6};
int numeroNotas= 3;
float ponderacionNota[] = {0.7, 0.2, 0.1};
float sumaNotas =0;
float mediaAritmeticaNotas =0;
float mediaNotas;


void setup() {
  for ( int iterador = 0; iterador < numeroNotas; iterador ++){
    sumaNotas = sumaNotas + notas[iterador];
  }
  mediaNotas = sumaNotas / numeroNotas;
  Serial.begin(9600); // solo una vez porque esto inicializa
  Serial.println("La media aritmética de las notas");
  Serial.println(mediaNotas);
  // put your setup code here, to run once:

}

void loop() {
  sumaNotas = 0;
  for ( int i = 0; i < numeroNotas; i++ ){
    sumaNotas = sumaNotas + notas[i]*ponderacionNota[i];
  }
  mediaNotas = sumaNotas;
 Serial.println("La media ponderada de las notas");
 Serial.println(mediaNotas);
}
