int Columnas[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int Filas[] = {12, 11, 10};
int RandFila;     //Variable para fila aleatoria
int RandColumna;  //Variable para columna aleatoria


void setup(){
  int contador;
  for (int contador = 0; contador < 10; contador++){
    pinMode(Columnas[contador], OUTPUT); }
  for (int contador = 0; contador < 4; contador++){
    pinMode(Filas[contador], OUTPUT); }
}

void loop(){
  RandLed();
}

void RandLed(){

// Esta secuencia enciende toda la fila central de forma aleatoria
  RandFila = random(0,3);
  RandColumna = random(0,9);
  digitalWrite(Filas[0], HIGH);
  digitalWrite(Filas[1], HIGH);
  digitalWrite(Filas[2], HIGH);
  digitalWrite(Columnas[0], HIGH);
  digitalWrite(Columnas[1], HIGH);
  digitalWrite(Columnas[5], HIGH);
  delay(75);
  digitalWrite(Filas[RandFila], LOW);
  digitalWrite(Columnas[RandColumna], LOW);
  delay(25);
}
