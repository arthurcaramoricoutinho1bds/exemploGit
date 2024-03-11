
// Definição das constantes: pinos de entrada
#define pinoBuzzer 2

// Constantes leds

#define pinoC 3
#define pinoD 4
#define pinoE 5
#define pinoF 6
#define pinoG 7
#define pinoA 8
#define pinoB 9
#define pinoc 10

// Variaveis

byte C, D, E, F, G, A, B, c = 0;




void setup() {

  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoC, INPUT);
  pinMode(pinoD, INPUT);
  pinMode(pinoE, INPUT);
  pinMode(pinoF, INPUT);
  pinMode(pinoG, INPUT);
  pinMode(pinoA, INPUT);
  pinMode(pinoB, INPUT);
  pinMode(pinoc, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // Leitura dos botões armazenada nas variaveis de controle

  C = digitalRead(pinoC);
  D = digitalRead(pinoD);
  E = digitalRead(pinoE);
  F = digitalRead(pinoF);
  G = digitalRead(pinoG);
  A = digitalRead(pinoA);
  B = digitalRead(pinoB);
  c = digitalRead(pinoc);

  // verificando qual nota foi acionada

  delay(1000);
  tone(pinoBuzzer, 330);  //E
  delay(540);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 330);  //E
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 350);  //F
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 392);  //G
  delay(540);
  tone(pinoBuzzer, 392);  //G
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 350);  //F
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 330);  //E
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 294);  //D
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 260);  //C
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 260);  //C
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 294);  //D
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 330);  //E
  delay(540);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 330);  //E
  delay(810);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 294);  //D
  delay(270);
  noTone(pinoBuzzer);

  tone(pinoBuzzer, 294);  //D
  delay(1080);
  noTone(pinoBuzzer);
  tone(pinoBuzzer, 260);  //C
  delay(1000);
  noTone(pinoBuzzer);
}
