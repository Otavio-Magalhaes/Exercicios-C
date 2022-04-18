#include <stdio.h>

int main(void) {

        
//                    Questão 1

  int a = 0, b = 0,c = 0, d = 0;

  printf("Digite o primeiro valor a ser salvo: ");
  scanf("%d", &a);

  printf("Digite o segundo valor a ser salvo: ");
  scanf("%d", &b);

  printf("O primeiro valor é %d e o segundo é %d\n",a,b);

  c = a; //Atribui o valor de "A" á variavel "C" para salvar o valor
  d = b; //Atribui o valor de "B" á variavel "D" para salvar o valor

  b = c; // inverti os valores, fazendo com que "C" atribuisse o valor de "A" à "B", ja que ele possuia o valor de "A" salvo 
  
  a = d; // inverti os valores, fazendo com que "D" atribuisse o valor de "B" à "A", ja que ele possuia o valor de "B" salvo

  printf("Com os valores invertidos a primeira variavel fica com %d\n e a segunda com %d",a ,b);



  
 
//                       Questão 2



  int val = 0, suc = 0,ant = 0;  // suc é a variavel sucessora ; ant é a variavel antecessora.
  printf("Digite um numero inteiro: ");
  scanf("%d",&val);

  suc = val + 1;
  ant = val -1;
 
  printf("O sucessor de %d é %d \n",val, suc);
  printf("O antecessor de %d é %d", val, ant);



//                    Questão3

  float valgasto = 0, valtotal = 0, serv = 0; // serv é a variavel referente aos 10% do serviço do garçom
  
  printf("Digite o valor gasto pelo cliente: ");
  scanf("%f",&valgasto);
  
  serv = (valgasto * 10)/100;  // calculo dos 10%
  valtotal = serv + valgasto;
  
  printf("O Valor total da conta é de R$ %.2f",valtotal);
  

  //                    Questão 4

  float raio = 0, perimetro = 0, area = 0;

  printf("Digite o Raio para o calculo da Área e do Perimetro:  ");
  scanf("%f",&raio);
  perimetro = (2 * 3.14 * raio);
  area = 3.14 * raio * raio;

  printf("O perimetro é %.2f\n", perimetro);
  printf("A área é: %.2f",area);
*/

  

  //                    Questão 5
  
  //A fórmula de conversão é:  F = (9*C+160)/5. Onde F é a temperatura em Fahrenheit e C é a temperatura em Centígrados.
  
  int c = 0, convert = 0;
  
  printf("Digite a Temperatura Em Celcius para conversão em Fahrenheit: ");
  scanf("%d",&c);
  convert = (9*c+160)/5;
  printf("A temperatura em F é de : %d Fº",convert);
  
  

  //                    Questão 6
  int codigo = 0;
  float total = 0, valormin=0, quantidadeconsumida = 0, valoruni = 0;

  printf("Digite o Código do cliente: ");
  scanf("%d",&codigo);
  
  printf("Digite o Valor do KW : ");
  scanf("%f",&valoruni);
  
  printf("Digite a Quantidade de KW consumidos pelo cliente: ");
  scanf("%f",&quantidadeconsumida);
  
  valormin = 21.23;
  total = (valoruni * quantidadeconsumida);
  
  if (valormin<= total){                                  // verificar se o gasto é menor ou igual ao valor minimo para pagamento da conta
  printf("A conta de luz do cliente(%d) é de  R$ %.2f \n",codigo,total);
  printf("Com a quntidade de %.1f KW Consumidos.\n",quantidadeconsumida);
    }
  else {
    printf("A conta de luz do cliente(%d) é de  R$ %.2f\n",codigo, valormin);
    printf("Com a quantidade de %.2f KW consumidos",quantidadeconsumida);
    }


//                  Questão 7
  int n1 =0, n2 = 0;

  printf("Digite o Primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o Segundo número: ");
  scanf("%d", &n2);

  if(n1>n2){
    printf("O valor %d é maior que %d", n1,n2);
  }

  else if(n1<n2){
    printf("O valor %d é maior que %d", n2,n1);
  }

  else{
    printf("Os valores %d e %d são iguais",n1,n2);
  }


//               Quetão 8
float av1 = 0, av2 = 0, mediafinal=0;


  printf("Digite a Nota da AV1 do Aluno: ");
  scanf("%f",&av1);

  printf("Digite a Nota da AV2 do Aluno: ");
  scanf("%f",&av2);

  mediafinal= (av1 + av2)/2;

  if(mediafinal>=6){  // verificar se a média é maior ou igual a 6, se for, mostar que o aluno está aprovado
    printf("Á média do aluno é %.2f\n portanto está Aprovado",mediafinal);
  }

  else if (mediafinal <5){  //verificar se a média é menor do que 5, se for, mostrar que o aluno esta reprovado direto
    printf("Á média do aluno é %.2f\n portanto está Reprovado",mediafinal);
  }
  else{ // verifica se a media do aluno  é igual a 5 e menor do que 6, (5 <= media < 6) se for, mostrar que o aluno esta em AV3
    printf("Á média do aluno é %.2f\n portanto está em AV3",mediafinal);
  }
  

//                                    Questão 9 
  
  int a = 0, b = 0, c =0 ;
  printf("Digite o Primeiro Numero inteiro: ");
  scanf("%d",&a);

  printf("Digite o Segundo Número inteiro: ");
  scanf("%d", &b); 

  printf("Digite o Terceiro Número inteiro: ");
  scanf("%d", &c); 

  if(a>b)                                                        //  A>B
    if(b>c){                                                     //  A>B>C
      printf("A ordem decrescente é: \n%d \n%d \n%d",a,b,c);   
    }
    else{                                                         // A>B, C>=B  
      if(a>c){
         printf("A ordem decrescente é: \n%d \n%d \n%d",a,c,b);     // A>C>B
      }
      else{printf("A ordem decrescente é: \n%d \n%d \n%d",c,a,b);   // C>A, A>B
        }
    }

    
  else
    if(b>c)
      if(a>c){
        printf("A ordem decrescente é: \n%d \n%d \n%d",b,a,c);      //B>A>C
      }
      else{
        printf("A ordem decrescente é: \n%d \n%d \n%d",b,c,a);    //B>C>A
      }
    else{
      printf("A ordem decrescente é: \n%d \n%d \n%d",c,b,a);      //C>B>A
    }


  


//                                      Questão 10
int val1 = 0, val2 = 0, opcao = 0, resultado = 0;

  printf("Digite o primeiro valor: ");
  scanf("%d",&val1);
  
  printf("Digite o segundo valor: ");
  scanf("%d",&val2);

  printf("\nDigite qual calculo deseja fazer: \n");
  printf("\nPara SOMA digite [1] \n");
  printf("Para Subtração digite [2] \n");
  printf("Para Multiplicação digite [3] \n");
  printf("Para Divisão digite [4] \n");
  scanf("%d",&opcao);

  switch(opcao){
    case 1:
      resultado = (val1+val2);
      printf("O valor da Soma entre %d + %d = %d",val1, val2, resultado);
      break;
    
    case 2:
      resultado = (val1-val2);
      printf("O valor da Subtração entre %d - %d = %d", val1,val2,resultado);
      break;

    case 3:
      resultado = (val1 * val2);
      printf("O valor da Multiplicação entre %d * %d = %d", val1,val2,resultado);
      break;

    case 4:
    resultado = (val1 / val2);
    printf("O valor da Divisão entre %d / %d = %d", val1,val2,resultado);
    break;
    default:
    printf("opção invalida!");
    break;
  }
  

//                                  Questão 11     

int opcao = 0, conta = 0;
float taxa = 0, total = 0, consumo=0, totconsumo = 0;
//totconsumo é referente ao total consumido menos o consumo inicial pra comercio e industia

  printf("Digite a Conta do Cliente: ");
  scanf("%d", &conta);

  printf("\nEspecifique o tipo do Consumidor: \n");
  printf("\nPara consumidor RESIDENCIAL digite[1]\n");
  printf("Para consumidor COMERCIAL digite[2]\n");
  printf("Para consumidor INDUSTRIAL digite[3]\n");
  printf("Opção: ");
  scanf("%d", &opcao);
  
  printf("Digite o Consumo de água por M³: ");
  scanf("%f", &consumo);


  switch(opcao){
  
  case 1:               // RESIDENCIAL
    // o valor por m³consumidos é de 0.05
      
    taxa = 5.0;
    total = taxa+(0.05 * consumo);
    printf("O Valor a ser pago pelo cliente %d referente ao consumo de %.2f m³ é de R$ %.2f",conta,consumo,total);  
    break;
  
  case 2:         //COMERCIAL
    // o valor por m³ consumidos é de 0.25
    taxa = 500; //TAXA PADRAO
    
    if(consumo<=80){
      total = taxa;
      printf("O Valor a ser pago pelo cliente %d referente ao consumo de %.2f m³ é de R$ %.2f",conta,consumo,total);
    }
    else{
      
      totconsumo= consumo-80;
      total= taxa +(totconsumo*0.25) ;
      printf("O Valor a ser pago pelo cliente %d referente ao consumo de %.2f m³ é de R$ %.2f",conta,consumo,total);
    }
    break;
    
  case 3:  //INDUSTRIAL
    //o consumo por m3 é de 0.04
    totconsumo = consumo-100;
    taxa = 500; // TAXA PADRAO
    if(consumo<=100){
      total = taxa;
      printf("O Valor a ser pago pelo cliente %d referente ao consumo de %.2f m³ é de R$ %.2f",conta,consumo,total);
    }
    else{
      total = taxa + (totconsumo*0.04);
      printf("O Valor a ser pago pelo cliente %d referente ao consumo de %.2f m³ é de R$ %.2f",conta,consumo,total);
    }  
  default: 
    printf("Opção invalida!");
    break;
}
 

//                                Questão 12
  int dia = 0, tipofita=0;
  float preco = 0, desconto =0, precofinal = 0, acrescimo=0;

  printf("Digite o valor da Fita: ");
  scanf("%f",&preco);

  printf("Digite o dia da semana em que está sendo alugado: \n");
  printf("\nPara Segunda-feira digite [2]\n");
  printf("Para Terça-feira digite [3]\n");
  printf("Para Quarta-feira digite [4]\n");
  printf("Para Quinta-feira digite [5]\n");
  printf("Para Sexta-feira digite [6]\n");
  printf("Para Sabado digite [7]\n");
  printf("Para Domingo digite [1]\n");
  printf("Sua opção: ");
  scanf("%d",&dia);

  printf("\nDigite se a fita alugada é da categoria de Lançamento ou Comum\n");
  printf("Para Lançamento digite [1]\n");
  printf("Para Comum digite[2]\n");
  printf("Sua opção: ");
  scanf("%d",&tipofita);
  
  desconto = preco * 0.4; // REFERENTE AOS DESCONTOS POR DIA DA SEMANA (TERÇA QUARTA E QUINTA)
  
  acrescimo = preco * 0.15; // REFERENTE AO ACRESCIMO NO VALOR DAS FITAS DO TIPO LANÇAMENTO

  switch(dia){
    case 1:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
    break;
    
    case 2:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        precofinal = precofinal - desconto;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco - desconto;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);   
      }
    break;
    
    case 3:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        precofinal = precofinal - desconto;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco - desconto;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
    break;

    case 4:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
    break;

    case 5:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        precofinal = precofinal - desconto;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco - desconto;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
    break;

    case 6:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
        }
    break;

    case 7:
      if (tipofita ==1){
        precofinal = preco + acrescimo;
        printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
      else{
        precofinal = preco;
      printf("O valor a ser pago é de R$ %.2f\n",precofinal);
      }
    break;
    
  default:
    printf("Opção Invalida!");
    break;
    
  }

//                            Questão 13


int i = 0, a = 0,b = 0,c = 0;

  printf("Digite Um valor somente entre [ 1 - 3 ]: \n");
  scanf("%d", &i);

  printf("Digite Um valor Qualquer: \n");
  scanf("%d", &a);

  printf("Digite Um valor Qualquer: \n");
  scanf("%d", &b);

  printf("Digite Um valor qualquer: \n");
  scanf("%d", &c);

  
  
  switch(i){

    case 1: // MOSTRA OS VALORES EM ORDEM CRESCENTE
      if(a<b) {                                                      //  A<B
        if(b<c){                                                     //  A<B<C
          printf("A ordem Crescente é: \n%d \n%d \n%d",a,b,c);   
        }
        else{                                                         // A<B, C<=B  
          if(a<c){
             printf("A ordem Crescente é: \n%d \n%d \n%d",a,c,b);     // A<C<B
          }
          else{
            printf("A ordem Crescente é: \n%d \n%d \n%d",c,a,b);   // C<A, A<B
          }
        }
      }
      else{
        if(b<c){
          if(a<c){
            printf("A ordem Crescente é: \n%d \n%d \n%d",b,a,c);      //B<A<C
          }
          else{
            printf("A ordem Crescente é: \n%d \n%d \n%d",b,c,a);    //B<C<A
          }
      }
        else{
          printf("A ordem Crescente é: \n%d \n%d \n%d",c,b,a);      //C<B<A
          }
        }
    break;
    
    case 2: // MOSTRA OS VALORES EM ORDEM DECRESCENTE
      
      if(a>b){                                                     //  A>B
        if(b>c){                                                     //  A>B>C
          printf("A ordem decrescente é: \n%d \n%d \n%d",a,b,c);   
        }
        else{                                                         // A>B, C>=B  
          if(a>c){
             printf("A ordem decrescente é: \n%d \n%d \n%d",a,c,b);     // A>C>B
          }
          else{printf("A ordem decrescente é: \n%d \n%d \n%d",c,a,b);   // C>A, A>B
            }
        }
      }
      else{
        if(b>c){
          if(a>c){
            printf("A ordem decrescente é: \n%d \n%d \n%d",b,a,c);      //B>A>C
          }
          else{
            printf("A ordem decrescente é: \n%d \n%d \n%d",b,c,a);    //B>C>A
          }
        }
        else{
          printf("A ordem decrescente é: \n%d \n%d \n%d",c,b,a);                        //C>B>A
        }
      }
    break;

    case 3: // MOSTRA OS VALORES COM O MAIOR VALOR NO MEIO
      if(a>b)                                                                          //  A>B   
        if(b>c){                                                                       //  B<A>C  "A é o maior portanto fica no meio" 
          printf("A ordem decrescente Com o maior no MEIO é: \n%d \n%d \n%d",b,a,c);   
        }
        else{                                                                               // A>B, C>=B  
          if(a>c){
             printf("A ordem decrescente Com o maior no MEIO é: \n%d \n%d \n%d",c,a,b);     // C<A>B "A é o maior portanto fica no meio"
          }
          else{printf("A ordem decrescente Com o maior no MEIO é: \n%d \n%d \n%d",a,c,b);   // A<C>B  "C é o maior portanto fica no meio"
            }
        }
  
      
      else{
        if(b>c){
          if(a>c){
            printf("A ordem decrescente Com o maior no MEIO  é: \n%d \n%d \n%d",a,b,c);      //A<B>C "B é o maior portanto fica no meio"
          }
          else{
            printf("A ordem decrescente Com o maior no MEIO  é: \n%d \n%d \n%d",c,b,a);    //C<B>A    "B é o maior portanto fica no meio"
          }
        }
        else{
          printf("A ordem decrescente Com o maior no MEIO  é: \n%d \n%d \n%d",b,c,a);      // B<C>A    "C é o maior portanto fica no meio"
        }
      }
    break;
    default:
      printf("Opção invalida");
      break;
  }
  

    
  



  
//                                Questão14
 
  float preco = 0;
  int escolha;
  
  printf("Digite o preço de Fábrica do Veículo: ");
  scanf("%f", &preco);

  
  printf("Menu de Escolha dos Adicionais: \n");
  printf("Para Adicionar Ar Condicionado Digite [1]\n");
  printf("Para Adicionar Pintura Metálica Digite [2]\n");
  printf("para Adicionar Vidro Elétrico digite [3]\n");
  printf("para Adicionar Direção Hidráulica digite [4]\n");
  printf("Para Terminar escolhas dos adicionais digite [-1]\n");
  scanf("%d",&escolha);
    

  while(escolha!= -1){

    if(escolha == 1){
      preco = (preco + 1750);  
    }
    else if(escolha == 2){
      preco = (preco+ 800);   
    }
    else if( escolha == 3){
      preco = (preco +1200);
        
    }
    else if (escolha == 4){
      preco = (preco + 2000); 
    }
    else{
      printf("Escolha Invalida , tente novamente: \n");
    }
    printf("Continuando--> \n");
    printf("Menu de Escolha dos Adicionais: \n");
    printf("Para Adicionar Ar Condicionado Digite [1]\n");
    printf("Para Adicionar Pintura Metálica Digite [2]\n");
    printf("para Adicionar Vidro Elétrico digite [3]\n");
    printf("para Adicionar Direção Hidráulica digite [4]\n");
    printf("Para Terminar escolhas dos adicionais digite [-1]\n");
    scanf("%d",&escolha);
  }
  
  printf("O valor final do Veiculo com a customização é de %.2f",preco);

  return 0; 
}