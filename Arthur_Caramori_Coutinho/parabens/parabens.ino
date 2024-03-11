// constante para o pino da buzzer
#define pinoBuzzer 2

// Constante do led
#define pinoLedVermelho 3

// constante do botao
#define pinoButton 4


//declaraçao da variavel de estado do botao
bool status = false;

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
  
  tone(pinoBuzzer,394 ); //Nota G
  delay(1000);

 tone(pinoBuzzer,394 ); //Nota G
  delay(1000);

  
  tone(pinoBuzzer,444 ); //Nota A
  delay(1000);

tone(pinoBuzzer,394 ); //Nota G
  delay(1000);

  tone(pinoBuzzer,528 ); //Nota C
  delay(1000);

tone(pinoBuzzer,498 ); //Nota B
  delay(1000);

  tone(pinoBuzzer,394 ); //Nota G
  delay(1000);

 tone(pinoBuzzer,394 ); //Nota G
  delay(1000);

  
  tone(pinoBuzzer,444 ); //Nota A
  delay(1000);


 tone(pinoBuzzer,394 ); //Nota G
  delay(1000);

  tone(pinoBuzzer,592 ); //Nota D
  delay(1000);

 tone(pinoBuzzer,528 ); //Nota C
  delay(1000);


tone(pinoBuzzer,394 ); //Nota G
  delay(1000); 
tone(pinoBuzzer,788); //Nota G
  delay(1500);
  
  
tone(pinoBuzzer,664 ); //Nota E
  delay(1000);

  tone(pinoBuzzer,592 ); //Nota D
  delay(1000);
  
  tone(pinoBuzzer,528 ); //Nota C
  delay(1000);

   tone(pinoBuzzer,444 ); //Nota A
  delay(1000);
  
  tone(pinoBuzzer,418 ); //Nota Ab
  delay(500);
  
  tone(pinoBuzzer,704); //Nota F
  delay(1200);

  tone(pinoBuzzer,664 ); //Nota E
  delay(1000);

 
 tone(pinoBuzzer,528 ); //Nota C
  delay(1000); 
  
  
  tone(pinoBuzzer,592 ); //Nota D
  delay(1000);
  
  tone(pinoBuzzer,528 ); //Nota C
  delay(1000);

digitalWrite(pinoLedVermelho, HIGH);
  
 }


  