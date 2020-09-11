   int pulsador =7; // Declara Pin del pusaldor
   int motor=3; // Declara Pin del motor
   void setup() // Se ejecuta cada vez que el Arduino se inicia
{
  pinMode(pulsador,INPUT); // El pulsador como una entrada
  pinMode(motor,OUTPUT); // El motor como una salida
}
  void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Si el pulsador se encuentra oprimido
  if(digitalRead(pulsador) == HIGH)
{
  digitalWrite(motor,HIGH); // Enciende el motor
}
else
{ // Si el pulsador no está oprimido
  digitalWrite(motor,LOW); // apaga el motor
}
}
