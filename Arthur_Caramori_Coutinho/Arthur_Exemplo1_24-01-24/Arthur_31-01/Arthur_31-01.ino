// declaraçao de variaveis para numeros decimais//
float sal_atual, novo_sal;

void setup() {
  // Configuração inicial do sistema
  // sera executada apenas no início

  sal_atual = 1200;

  //verificando o valor do salario com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //inicio
    novo_sal = sal_atual * 1.2;
  }  //fim

  else if (sal_atual > 500) {  //inicio
    novo_sal = sal_atual * 1.1;
  }  //fim
  else {
    novo_sal = 0;
  }


  Serial.begin(9600);
}

void loop() {
  // Código que será executado repetidamente
  // Serial.println("Hoje é o ultimo dia de janeiro");  // Mostra a frase no monitor
  if (novo_sal == 0) {
    Serial.println("Crie vergonha na cara e digite um salario válido!!!");
  }


  else {
    // exibindo o novo salario
    Serial.print("Novo Salario:");
    Serial.println(novo_sal);
        Serial.println("---------------------------");
  }

  delay(1000);  //Espera 1 segundo antes de seguir o loop
}
