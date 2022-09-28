/* 1- exemplo 1234 senha autorizada com sucesso, acesso autorizado,1233 senha
recusada, acesso negado 2- dados de entrada: senha_recebida, senha
  processamento:senha==senha_recebida ou senha!=senha_recebida
dados de saida: senha autorizada com sucesso, acesso autorizado ou senha
recusada, acesso negado 3- codigo construido linha 9 a 23 4- teste1234 senha
autorizada com sucesso, acesso autorizado 1233 senha recusada, acesso negado
5- acredito que poderia melhorar em questão de colocar um loop quando der senha
recusada*/
/*#include <stdio.h>
int main(void) {
  int senha, senha_recebida;

  senha = 1234;
  printf("digite a senha para entrar:\n");
  scanf("%i", &senha_recebida);

  if (senha == senha_recebida) {
    printf("senha autorizada com sucesso, acessoautorizado");
  } 
    else if (senha != senha_recebida) {
      printf("senha recusada, acesso negado");
    }

}*/