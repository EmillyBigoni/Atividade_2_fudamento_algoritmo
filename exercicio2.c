/*1- exemplo a média de idades coletadas eh 31 e a idade da mais velha é 33
30 2- dados de entrada: idade, quant, soma, idade_velha,media_idade
processamento: soma=idade, media=soma/quant,idade>=idade_velha;
dados de saida: media de idades e idade mais velha;
3- construção codigo:
4- teste: a media de idade eh 30,a idade mais velha eh 33
5- revisão: acredito que o codigo deu alguns erros para achar a idade mais velha mas dependendo podemos melhorar colocando outras funções*/
#include <stdio.h>
int main (void) {
  int n1, n2, n3, n4, soma, idade_velha;
  float media_idade;

  printf("digite sua idade:");
  scanf("%i", &n1);
  printf("digite sua idade:");
  scanf("%i", &n2);
  printf("digite sua idade:");
  scanf("%i", &n3);
  printf("digite sua idade:");
  scanf("%i", &n4);
  
  soma= n1 + n2 + n3 + n4;
  
  media_idade= soma/4;

  printf("a media de idade eh %.0f\n", media_idade);


    if(n1>n2){
     printf("a idade mais velha eh %d \n", n1);
    }
    else if(n2>n3){
    printf("a idade mais velha eh %d \n", n2);
    }
     if(n3>n4){
      printf("a idade mais velha eh %d \n", n3);
       }
    
      else if(n4>n3){
      printf("a idade mais velha eh %d \n", n4);
      }
  
  
} 
