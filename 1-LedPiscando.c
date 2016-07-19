/*
* Código para o Primeiro Exemplo: Led Piscando
* O Led deve ser conectado no pino digital 13(D13)
*/
int PinoLed = 13;
void setup(){
  pinMod(PinoLed, OUTPUT);
}

void loop(){
  digitalWrite(PinoLed, HIGH);
  delay(1000);
  digitalWrite(PinoLed, LOW);
  delay(1000);
}
