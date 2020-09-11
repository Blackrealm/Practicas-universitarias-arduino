int led = 13; // Pin donde se encuentra el LED, salida
char leer; // Variable donde se almacena la letra
boolean prendido=true; // Estado LED la primera vez, apagado
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
    Serial.begin(9600); // Inicia comunicación serial
    pinMode(led, OUTPUT); // Configurar el LED como una salida
}
void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Guardar en una variable el valor de la consola serial
    leer=Serial.read(); // Espera a recibir un Byte por el Puerto Serial
// Si es la letra 'a' y además el LED está apagado
if ((prendido==true) )
{
  digitalWrite(13,HIGH); // Enciende el LED
   delay(100); // Temporiza un segundo (1s = 1000ms)
   digitalWrite(13,LOW); // Apaga el LED
   delay(100);
}
// Si es la letra 'a' y además el LED está encendido
else if ( (leer=='a') && (prendido==true) )
 {
   digitalWrite(led,LOW); // Apaga el LED
   prendido=false; // Actualiza el estado del LED
 }
}
