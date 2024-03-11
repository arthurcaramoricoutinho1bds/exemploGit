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
  if (C == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 260);
  } 
  
  else if (D == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 294);
  }

 else if (E == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 330);
  }

else if (F == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 350);
  }

else if (G == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 392);
  }

else if (A == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 442);
  }

else if (B == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 496);

  }

else if (c == 1) {
    // Ativa a nota C
    tone(pinoBuzzer, 528);
  }

else{
  noTone(pinoBuzzer);
}
}


