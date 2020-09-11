void setup() // Se ejecuta cada vez que el Arduino se inicia
{
   Serial.begin(9600); // Inicia comunicación serial
   pinMode(9,OUTPUT); // Configurar el pin 9 como una salida de PWM
}
void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Guardar en una variable el valor de la lectura análoga de la
// Fotocelda
   int foto = analogRead(A0);
// Verifica el valor máximo y realizar una conversión
   int conversion = 780 - foto;
// Condicional para establecer un valor absoluto
if ( conversion < 0)
conversion = conversion * -1; // Multiplicar por -1 porque es negativo
// Imprimir datos del valor de la lectura análoga de la fotocelda
    Serial.print("Foto : ");
    Serial.print(foto);
    Serial.println("");
// Imprimir datos del valor de la conversión
    Serial.print("Conv : ");
    Serial.print(conversion);
    Serial.println("");
// Escritura análoga de PWM en el LED de acuerdo a la conversión
    analogWrite(9, conversion);
    delay(500); //Retardo para datos en la consola
}
