int pulsador=2; // Pin donde se encuentra el pulsador, entrada
int led=13; // Pin donde se encuentra el LED, salida
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
    pinMode(pulsador, INPUT); // Configurar el pulsador como una entrada
    pinMode(led,OUTPUT); // Configurar el LED como una salida
}
void loop() // Esta función se mantiene ejecutando
{                          // Cuando este energizado el Arduino
                           // Condicional para saber estado del pulsador
    if (digitalRead(pulsador)==HIGH)
      {
// Pulsador oprimido
       digitalWrite(led,HIGH); // Enciende el LED
      }
else
{
// Pulsador NO oprimido
         digitalWrite(led,LOW); // Apaga el LED
}
}
