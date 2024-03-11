
float salario_atual, novo_salario;


void setup() {
  // inicia a comunicaçao com o serial monitor
  Serial.begin(9600);



  delay(1000);  //espera estratégica
}

void loop() {

  Serial.print("Digite o salario atual");
  salario_atual = aguardaEntradaNumerica();
  Serial.println(salario_atual);

  // cálculo do novo salario

  novo_salario = (salario_atual + salario_atual * 25/100);

  Serial.print("Novo salario: ");
  Serial.println(novo_salario);
  delay(1000);
 }

// Criando uma função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    // Aguarda até que um valor seja digitadoa
  }

  // verifica se a entrada é numérica
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    // descarta a entrada não numérica
    Serial.read();
  
   
  while (Serial.available() == 0){
    // aguarda a nova entrada
    }
  }

  // retornar o valor digitado no serial em tipo float

  return Serial.parseFloat();
}

