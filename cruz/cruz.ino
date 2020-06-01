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

// Esta secuencia enciende de un color especificado formando una cruz
// Solo debo de cambiar para encender la componente en "digitalWrite(Filas[1], HIGH);" 0=rojo, 1=azul y 2=amarillo
  digitalWrite(Filas[2], HIGH);
  digitalWrite(Columnas[0], HIGH);
  digitalWrite(Filas[2], HIGH);
  digitalWrite(Columnas[1], HIGH);
  digitalWrite(Filas[2], HIGH);
  digitalWrite(Columnas[5], HIGH);
  digitalWrite(Filas[2], HIGH);ss
  digitalWrite(Columnas[7], HIGH);
  digitalWrite(Filas[2], HIGH);
  digitalWrite(Columnas[0], HIGH);
  digitalWrite(Filas[2], HIGH);
  digitalWrite(Columnas[2], HIGH);
  delay(75);

// Menos tiempo para observar la cruz
  RandFila = random(0,3);
  RandColumna = random(0,9);
  digitalWrite(Filas[RandFila], LOW);
  digitalWrite(Columnas[RandColumna], LOW);
  delay(500);
}
