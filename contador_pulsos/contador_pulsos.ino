int conta = 0; // Variable para guardar el conteo de los pulsos
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
Serial.begin(9600); // Inicia comunicación serial
   pinMode(2,INPUT); // Configura el pin 2 como una entrada, pulsador
   pinMode(13,OUTPUT); // Configura el pin 13 como una salida, LED
}
   void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Si el pulsador esta oprimido
   if ( digitalRead(2) == HIGH )
{
   delay (100); // Retardo
// Si el pulsador no está oprimido, flanco de bajada
   if ( digitalRead(2) == LOW )
{
   conta++; // Incrementa el contador
   Serial.println(conta); // Imprime el valor por consola
   delay (100); // Retardo
}
}
// Si el valor del contador es 5
   if (conta==5)
{
   digitalWrite(13,HIGH); // Enciende el LED
}
// Si el valor del contador es 8
   if (conta==8)
{
   digitalWrite(13,LOW); // Apaga el LED
   conta = 0; // Inicializa contador
}
}
