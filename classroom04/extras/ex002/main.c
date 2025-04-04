#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int n1, n2;
    setlocale(LC_ALL, "Portuguese");

    printf("Insira dois números\n");
    printf("Valor 1: ");
    scanf("%d",  &n1);
    printf("Valor 2: ");
    scanf("%d", &n2);

    if((n1 % 2 == 0) && (n2 % 2 == 0)){
        printf("Dois números pares");
        printf("\nResultado: %d (n1+n2)", n1+n2);
    }else if((n1 % 2 != 0) && (n2 % 2 != 0)){
        printf("Dois números ímpares");
        printf("\nResultado: %d (n1-n2)", n1-n2);
    }else if((n1 % 2 == 0) && (n2 % 2 != 0)){
        printf("O primeiro ser par e o segundo ímpar");
        printf("\nResultado: %d (n1*n2)", n1*n2);
    }else if((n1 % 2 != 0) && (n2 % 2 == 0)){
        printf("O primeiro ser ímpar e o segundo par");
        printf("\nResultado: %.2f (n1/n2)", (float) n1/n2);
    }
    printf("\n\n");
}