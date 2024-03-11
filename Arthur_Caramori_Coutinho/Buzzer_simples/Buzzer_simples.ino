// constante para o pino da buzzer
#define pinoBuzzer 2

// Constante do led
#define pinoLedVermelho 3


void setup() {
  Serial.begin(9600);

  // modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  
  delay(1000);  // parada estratégica
}

void loop() {

  tone(pinoBuzzer, 523); //Nota C
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer); //desliga a buzzer
  digitalWrite(pinoBuzzer, LOW); //desliga a buzzer
  digitalWrite(pinoLedVermelho, LOW);// apaga o led
  delay(1000);

}
