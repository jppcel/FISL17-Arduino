/*
* Código para o Exemplo 2: Led Controlado por Botão
* O Led deve ser conectado no pino 13 e o botão no 12
*/
PinoLed = 13;
PinoBotao = 12;

void setup(){
  pinMode(PinoLed, OUTPUT);
  pinMode(PinoBotao, INPUT);
}

// Variável de controle se está ligado ou não o Led
int ligado = 0;
// Tempo para utilização do delay
int delay = 100;
void loop(){
  if(digitalRead(PinoBotao) == 1){
    if(ligado == 0){
      digitalWrite(PinoLed, HIGH);
      ligado = 1;
      delay(delay);
    }else{
      digitalWrite(PinoLed, LOW);
      ligado = 0;
      delay(delay);
    }
  }
}
