#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    int idade, ano_contratação, tempo_empregado;
    float salario_base, salario_final;
    printf("Insira a sua idade: ");
    scanf("%d", &idade);
    printf("Insira o seu sexo (F) ou (M): ");
    scanf(" %c", &sexo);
    printf("Insira o seu salário base (R$): ");
    scanf("%f", &salario_base);
    printf("Insira o ano em que você foi contratado: ");
    scanf("%d", &ano_contratação);
    tempo_empregado = 2025 - ano_contratação;

    if((idade >= 18) && (idade <= 39)){
        if(sexo == 'M'){
            salario_final = salario_base * 1.10;
            if(tempo_empregado <= 10){
                salario_final -= 10;
            }else if(tempo_empregado > 10){
                salario_final += 17;
            }
        }else if(sexo == 'F'){
            salario_final = salario_base * 1.08;
            if(tempo_empregado <= 10){
                salario_final -= 11;
            }else if(tempo_empregado > 10){
                salario_final += 16;
            }
        }
    }else if((idade >= 40) && (idade <= 69)){
        if(sexo == 'M'){
            salario_final = salario_base * 1.08;
            if(tempo_empregado <= 10){
                salario_final -= 5;
            }else if(tempo_empregado > 10){
                salario_final += 15;
            }
        }else if(sexo == 'F'){
            salario_final = salario_base * 1.10;
            if(tempo_empregado <= 10){
                salario_final -= 7;
            }else if(tempo_empregado > 10){
                salario_final += 14;
            }
        }
    }else if((idade >= 70) && (idade <= 99)){
        if(sexo == 'M'){
            salario_final = salario_base * 1.15;
            if(tempo_empregado <= 10){
                salario_final -= 15;
            }else if(tempo_empregado > 10){
                salario_final += 13;
            }
        }else if(sexo == 'F'){
            salario_final = salario_base * 1.17;
            if(tempo_empregado <= 10){
                salario_final -= 17;
            }else if(tempo_empregado > 10){
                salario_final += 12;
            }
        }
    }

    printf("Salário final: R$%.2f", salario_final);



    printf("\n\n");

}