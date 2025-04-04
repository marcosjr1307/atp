#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1;

    printf("Insira um número para ver se ele é ímpar/par: ");
    scanf("%d", &n1);
    
    if(n1%2 == 0){
        printf("Número par!");
    }else if(n1%2 != 0){
        printf("Número ímpar!");
    }

}
