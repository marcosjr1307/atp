#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;
    printf("Cálculo de Índice de Massa Corporal (IMC)");
    printf("\nInforme o seu peso (KG): ");
    scanf("%f", &peso);
    printf("Informe a sua altura (m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu imc é de %.2f\n", imc);
    if(imc < 18.5){
        printf("Você está abaixo do peso ideal");
    }else if((imc >= 18.5) && (imc <= 24.9)){
        printf("Parabéns — você está em seu peso normal!");
    }else if((imc >= 25) && (imc <= 29.9)){
        printf("Você está acima de seu peso (sobrepeso)");
    }else if((imc >= 30) && (imc <= 34.9)){
        printf("Obesidade grau I");
    }else if((imc >= 35) && (imc <= 39.9)){
        printf("Obesidade grau II");
    }else if(imc >= 40){
        printf("Obesidade grau III");
    }

    printf("\n\n");

}