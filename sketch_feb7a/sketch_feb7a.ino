int redLed = 8;
int yellowLed = 9;
int greenLed = 10;

void setup() {
  //Definidovos tipos dos pinos
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  delay(1000);
}


void loop() {
  digitalWrite(greenLed, HIGH);
  delay(100);
  digitalWrite(greenLed, LOW);
  delay(100);

 digitalWrite(yellowLed, HIGH);
  delay(100);
  digitalWrite(yellowLed, LOW);
  delay(100);

 digitalWrite(redLed, HIGH);
  delay(100);
  digitalWrite(redLed, LOW);
  delay(100);


}

