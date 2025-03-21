#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a,b,c;

    printf("Insira os 3 lados de um triângulo");
    printf("\nLado 1: ");
    scanf("%d", &a);
    printf("Lado 2: ");
    scanf("%d", &b);
    printf("Lado 3: ");
    scanf("%d", &c);

    if((a < (b+c)) && (b < (a+c)) && (c < (a+b))){
        if((a == b) && (b == c)){
            printf("\nTriângulo Equilátero\n");
        }else if((a == b) || (a == c) || (b == c)){
            printf("\nTriângulo Isósceles\n");
        }else{
            printf("\nTriângulo Escaleno\n");
        }
    }else{
        printf("\nOs valores indicados não formam um triângulo!\n");
    }
}