   int led = 13; // Pin donde se encuentra el LED, salida
   char leer; // Variable donde se almacena la letra
   boolean prendido=false; // Estado LED la primera vez, apagado
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
   if ( (leer=='a') && (prendido==false) )
{
   digitalWrite(led,HIGH); // Enciende el LED
   prendido=true; // Actualiza el estado del LED
}
// Si es la letra 'a' y además el LED está encendido
   else if ( (leer=='a') && (prendido==true) )
{
   digitalWrite(led,LOW); // Apaga el LED
   prendido=false; // Actualiza el estado del LED
}
}
