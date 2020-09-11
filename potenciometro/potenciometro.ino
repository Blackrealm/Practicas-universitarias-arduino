
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
   Serial.begin(9600); // Inicia comunicación serial
}
void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Guardar en una variable entera el valor del potenciómetro 0 a
// 1024
  int valor= analogRead(A0);
// Imprime en la consola serial el valor de la variable
   Serial.println(valor);
// Retardo para la visualización de datos en la consola
   delay(100);
}
