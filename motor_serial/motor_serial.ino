  int motor=3; // Declara Pin del motor
  void setup() // Se ejecuta cada vez que el Arduino se inicia
{
  Serial.begin(9600); // Inicia la comunicacion serial Arduino-PC
}
  void loop() // Esta función se mantiene ejecutando
{ // Cuando este energizado el Arduino
// Si hay algun valor en la Consola Serial
  if (Serial.available()){
// Variable donde se guarda el carácter enviado desde teclado
  char a = Serial.read();
// Si el carácter ingresado esta entre 0 y 5
  if (a>='0' && a<='5'){
// Variable para escalar el valor ingresado a rango de PWM
  int velocidad = map(a,'0','5',0,255);
// Escritura de PWM al motor
  analogWrite(motor,velocidad);
// Mensaje para el usuario
  Serial.print("El motor esta girando a la velocidad ");
  Serial.println(a);
}
  else{
// Mensaje para el usuario
  Serial.print("Velocidad invalida");
  Serial.println(a);
}
}
}
