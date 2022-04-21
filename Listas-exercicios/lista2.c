#include <stdio.h>
int main(){
  
QUESTÃO 1- 

int contador = 0, valor = 0, resultado=0;

  printf("Digite um Valor Para saber a Tabuada de Multiplicação: ");
  scanf("%d",&valor);

  for(contador=1 ;contador <= 10; contador++){
    
    resultado=0;
    resultado = (valor*contador);
    
    printf("%d x %d = %d\n", valor, contador, resultado);
  }


QUESTÃO 2-

int soma = 0, valor = 0;
  
  printf("Adicione um número inteiro a soma: ");
    scanf("%d",&valor);

  while(valor != 0){
   
    soma = (soma + valor);
    
    printf("Adicione um número inteiro a soma: ");
    scanf("%d",&valor);
  }
  printf("A soma total dos Números é: %d",soma);

QUESTÃO 3-
  

int contador = 0, valor = 0, maior = 0, menor=0;

  for(contador = 1; contador<=20; contador++){
  
    printf("Digite um valor: ");
    scanf("%d",&valor);

    if(contador == 1){
      menor = valor;
      maior = valor;
    }
    else{
      if(menor>=valor){
        menor = valor;
      }
      else if (maior<=valor){
        maior = valor;
      }
    } 
  }

  printf("O Maior Valor é: %d \n", maior);
  printf("O Menor Valor é: %d \n",menor);


  
QUESTÃO 4-
  

  int contador = 0,nmulher = 0, nhomem = 0;
  float altura = 0 ,maior_alt = 0, menor_alt = 0, media_alt_homem = 0,total_alt_homem = 0;
  char sexo;

 for(contador=1;contador<=5;contador++){

   printf("Digite o Seu sexo [f/m]:  ");
   scanf(" %c", &sexo);
   
   printf("Digite a sua altura:  ");
   scanf("%f", &altura);

      if(contador==1){
     if(sexo =='f'){
       nmulher++;
     }
     else if(sexo=='m'){
       nhomem++;
       total_alt_homem = altura;
     }
     else{
       printf("Sexo invalido!");
     }
     maior_alt=altura;
     menor_alt=altura;
   }
   else{

     if(sexo=='f'){
       nmulher++;
     }
     else if(sexo=='m'){
       nhomem++;
       total_alt_homem = total_alt_homem + altura;
       }
     else{
       printf("Sexo invalido!");
     }
     

     if(altura>maior_alt){
         maior_alt = altura;
       }
       else if (altura<menor_alt){
         menor_alt = altura;
       }
       else{
         continue;
       }
     }  
   }
 
  media_alt_homem = total_alt_homem / nhomem;
  printf("A maior altura é: %.2f\n", maior_alt);
  printf("A menor altura é: %.2f\n", menor_alt);
  printf("A média das alturas dos Homem é de: %.2f\n",media_alt_homem);
  printf("O número total de mulheres é de: %d\n", nmulher);




Questão 5-
  
int contador = 0, total_sim = 0, total_nao = 0, nmulher = 0, nhomem =0;
  float percent_sim = 0, percent_nao = 0;
  char sexo, opcao;

 for(contador = 1; contador<=10; contador++){

   printf("\nDigite o seu sexo: [f/m]:  ");
   scanf(" %c",&sexo);
  
   printf("Digite sua Resposta: [s/n]:  ");
   scanf(" %c",&opcao);

  if(opcao=='s'){
    total_sim++;
    if(sexo=='f'){
      nmulher++;
    }
    else if (sexo=='m'){
      continue;
    }
  }
  else if (opcao =='n'){
    total_nao++;
    if(sexo=='m'){
      nhomem++;
    }
    else if (sexo =='f'){
      continue;
    }
  }
 }

  percent_sim = (nmulher*100)/total_sim;
  
  percent_nao = (nhomem*100)/total_nao;

  printf("O total calculado de respostas Positivas, (SIM),foram: %d\n", total_sim);
  printf("O total calculado de respostas Negaivas, (NÃO),foram: %d\n", total_nao);

  printf(" A porcentagem de Mulheres que votaram SIM foram: %.0f%%\n", percent_sim);
  printf(" A porcentagem de Homens que votaram Não foram: %.0f%%\n", percent_nao);







Questão 6- 
int idade = 0, maior_idade = 0, soma = 0, nmaior_idade = 0;
  float media_maior_idade = 0;

  do{
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade>=18){
      nmaior_idade++;
      soma = soma + idade;
    }
    else{
      continue;
    }
  }

  while(idade!=0);

  media_maior_idade = soma/nmaior_idade;
  
  printf("A soma das idades das pessoas com mais de 18 anos é: %d anos\n", soma);
  printf("A média das idades das pessoas acima de 18 anos é: %.2f anos\n", media_maior_idade);


  

Questão 7- 

int numero_cliente, contador = 0;
  float quantidade_consumida = 0, maior_consumo = 0, menor_consumo = 0, media_consumida = 0;
  float valor_uni_kw = 0, total_pagar = 0, total_consumo = 0;


  printf("Digite o Numero do cliente: ");
  scanf("%d", &numero_cliente);

 
  while(numero_cliente != 0){

    contador++;
    if(contador ==1){
      printf("Digite o Valor do KW: ");
      scanf("%f", &valor_uni_kw);
  
      printf("Digite a Quantidade de KW Consumidas: ");
      scanf("%f", &quantidade_consumida);
  
      total_pagar = (valor_uni_kw * quantidade_consumida);
  
      printf("\nA conta de luz do cliente(%d) é de  R$ %.2f \n", numero_cliente,total_pagar);
      printf("Com a quntidade de %.1f KW Consumidos.\n", quantidade_consumida);
  
      total_consumo = total_consumo + quantidade_consumida;
      maior_consumo = quantidade_consumida;
      menor_consumo = quantidade_consumida;
    }
    
    else{
      printf("Digite o Valor do KW: ");
      scanf("%f", &valor_uni_kw);
  
      printf("Digite a Quantidade de KW Consumidas: ");
      scanf("%f", &quantidade_consumida);
  
      total_pagar = (valor_uni_kw * quantidade_consumida);
  
      printf("\nA conta de luz do cliente(%d) é de  R$ %.2f \n", numero_cliente,total_pagar);
      printf("Com a quntidade de %.1f KW Consumidos.\n", quantidade_consumida);
      total_consumo = total_consumo + quantidade_consumida;
      
      if(quantidade_consumida>maior_consumo){
        maior_consumo = quantidade_consumida;
      }
      else if (quantidade_consumida < menor_consumo){
        menor_consumo = quantidade_consumida;
      }
    }
    
    printf("\nDigite o Numero do cliente: ");
    scanf("%d", &numero_cliente);
    
  }

  media_consumida = total_consumo / contador;

  printf("\nO Maior consumo verificado foi de %.2f KW\n", maior_consumo);
  printf("O Menor consumo verificado foi de %.2f KW\n", menor_consumo);
  printf("A Média Geral de consumo é de %.2f KW\n", media_consumida);

  return 0;
}