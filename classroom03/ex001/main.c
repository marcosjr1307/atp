#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;
    printf("Insira um ano para ver se ele é bissexto: ");
    scanf("%d", &ano);

    if((ano%400 == 0) || ((ano%4 == 0) && !(ano % 100 == 0))){
        printf("Ano %d é BISSEXTO", ano);
    }else{
        printf("Ano %d não é bissexto", ano);
    }
    
    return 0;
}