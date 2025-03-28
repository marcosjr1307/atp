#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float n1, n2, media;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira suas notas\n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);

    if(((n1 >= 0) && (n1 <= 10)) && ((n2 >= 0) && (n2 <= 10))){
        media = (n1 * 0.4) + (n2 * 0.6);
        printf("Média: %.2f", media);
    }else{
        printf("Nota inválida");
    }

}