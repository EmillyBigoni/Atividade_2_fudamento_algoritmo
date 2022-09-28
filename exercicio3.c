/*1-exemplo 2, 4, 5 os 3 lados formam um triangulo escaleno
3 3 4 os 3 lados formam um triangulo isosceles
2 2 2 os 3 lados formam um triangulo equilatero
2 4 1 os 3 lados nao formam um triangulo 
2-dados de entrada: x,y,z
processamento:x + y > z e x + z > y e y + z > x,x == y e x == z,x == y ou x == z ou y == z
dados de saida:Os 3 lados formam um triangulo equilatero, Os 3 lados formam um triangulo escaleno, Os 3 lados formam um triangulo isosceles,os 3 lados nao formam um triangulo
4-2, 4, 5 os 3 lados formam um triangulo escaleno
3 3 4 os 3 lados formam um triangulo isosceles
2 2 2 os 3 lados formam um triangulo equilatero
2 4 1 os 3 lados nao formam um triangulo 
5-acredito que da pra fazer de outra maneira mais a melhor forma que eu achei de fazer foi esta 
 */
#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite tres valores: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x + y > z && x + z > y && y + z > x){
        printf("Os 3 lados formam um triangulo!\n");
        if(x == y && x == z)
            printf("Equilatero\n");
        else
            if(x == y || x == z || y == z)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um trinagulo!\n");
}
