int boton=2; // Pin donde se encuentra el pulsador, entrada
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
// Configuración
    pinMode(boton,INPUT); // Configurar el botón como una entrada
    Serial.begin(9600); // Inicia comunicación serial
}
void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Guardar en una variable entera el valor del botón 0 o 1
    int estado = digitalRead(boton);
// Condicional para saber estado del pulsador
if (estado==1)
{
// Pulsado
      Serial.println("Pulsado"); // Imprime en la consola serial
} // "Pulsado"
else
{
// No esta pulsado
     Serial.println("NO Pulsado"); // Imprime en la consola serial
} // "NO Pulsado"
     delay(100); // Retardo para la visualización de datos en la consola
}
