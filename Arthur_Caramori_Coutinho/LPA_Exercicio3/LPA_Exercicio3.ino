
float salario_atual, novo_salario, gratificacao, imposto;


void setup() {
  // inicia a comunicaçao com o serial monitor
  Serial.begin(9600);



  delay(1000);  //espera estratégica
}

void loop() {

  Serial.print("Digite o salario atual: ");
  salario_atual = aguardaEntradaNumerica();
  Serial.println(salario_atual);

// cálculo do novo salario

  gratificacao = (salario_atual * 5/100);
  Serial.println(gratificacao);

  imposto = (salario_atual * 7/100);
  Serial.println(imposto);

  novo_salario = (salario_atual + gratificacao - imposto);

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

