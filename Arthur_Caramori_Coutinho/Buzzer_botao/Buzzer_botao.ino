// constante para o pino da buzzer
#define pinoBuzzer 2

// Constante do led
#define pinoLedVermelho 3

// constante do botao
#define pinoButton 4


//declaraçao da variavel de estado do botao

void setup() {
  Serial.begin(9600);

  // modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoButton, INPUT);
  delay(1000);  // parada estratégica
}

void loop() {
  
  if (digitalRead(pinoButton) == 1) {
  tone(pinoBuzzer, 523); //Nota C
  digitalWrite(pinoLedVermelho, HIGH);
  }


else if (digitalRead(pinoButton) == 1) {
      noTone(pinoBuzzer); //desliga a buzzer
    digitalWrite(pinoLedVermelho, LOW);// apaga o led

  }
}
