/*declaração das variaveis / 
numeros reais*/

float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  // inicia a comunicaçao com o serial monitor👀
  Serial.begin(9600);



  delay(1000);  //espera estratégica
}


void loop() {
 
  Serial.print("Digite a nota 1: ");

 // Lê o valor do serial e guarda na variavel nota1
 nota1 = aguardaEntrada();
 Serial.println(nota1);
 
  Serial.print("Digite a nota 2: ");
 // Lê o valor do serial e guarda na variavel nota1
  nota2 = aguardaEntrada();
Serial.println(nota2);

Serial.print("Digite a nota 3: ");
 
nota3 = aguardaEntrada();
Serial.println(nota3);

//Atribuição de pesos

Serial.print("Digite o peso1: ");
 
 peso1 =aguardaEntrada();
Serial.println(peso1);

  Serial.print("Digite o peso2: ");
 
 peso2 = aguardaEntrada();
Serial.println(peso2);
  
Serial.print("Digite o peso3: ");

 peso3 = aguardaEntrada();
Serial.println(peso3);
  
// Cálculo da média ponderada:

media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);
 
 Serial.print("media ponderada: ");
 Serial.println(media);
delay(1000);

}

// Criando uma função chamada 
float aguardaEntrada(){
  while(!Serial.available()){
    // Aguarda até que um valor seja digitado
  }
  // retornar o valor digitado no serial em tipo float
  
  return Serial.parseFloat();



}


