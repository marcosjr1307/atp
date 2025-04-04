#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mes, ano;

    printf("Insira um mês (número) para ver a quantidade de dias que ele tem: ");
    scanf("%d", &mes);
    
    if(mes<=12){
        if(mes == 2){
            printf("Insira o ano: ");
            scanf("%d", &ano);
            if((ano%400 == 0) || ((ano%4 == 0) && !(ano % 100 == 0))){
                printf("29 dias");
            }else{
                printf("28 dias");
            }
        }else if(mes == 8){
            printf("31 dias");
        }else{
            if((mes != 2) && (mes != 8) && (mes % 2 ==0)){
                printf("30 dias");
            }else if((mes != 2) && (mes != 8) && (mes % 2 != 0)){
                printf("31 dias");
            }
        }
    }else{
        printf("Mês inválido!");
    }
    

    return 0;
}