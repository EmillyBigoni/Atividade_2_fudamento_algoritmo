/*1-exemplo 4,9 a media eh D
6,9 a media eh C
8,9 a media eh B
9,0 a media eh A
2= dados de entrada: media,
processamento: media <= 4.9,media <= 6.9,media <= 8.9, media <= 10.0,
dados de saida: a media D, media C, media B, media A,
3- CODIGO
4-4,9 a media eh D
6,9 a media eh C
8,9 a media eh B
9,0 a media eh A
5- acredito esta forma a melhor maneira para desenvolver ou poderia tambem usar switch case,
*/
#include <stdio.h>

int main(void) {
  float media;
  printf("coloque a media final do aluno:\n");
  scanf("%f", &media);

  if (media <= 4.9) {
    printf("a media eh D");
  } else if (media <= 6.9) {
    printf("a media eh c");
  } else if (media <= 8.9) {
    printf("a media eh B");
  } else if (media <= 10.0) {
    printf("a media eh A");
  }
}