#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char sexo, nacionalidade, nome[50];
    int idade;
    
    printf("Insira seu nome: ");
    gets(nome);
    printf("Insira o seu sexo (F) ou (M): ");
    scanf(" %c", &sexo);
    printf("Insira a sua nacionalidade. Use (b) para Brasileira ou (e) para estrangeira: ");
    scanf(" %c", &nacionalidade);
    printf("Insira a sua idade: ");
    scanf("%d", &idade);

    if((sexo != 'M') && (sexo != 'F') && (sexo != 'm') && (sexo != 'f')){
        printf("Sexo inválido!");
    }else if((nacionalidade != 'B') && (nacionalidade != 'E') && (nacionalidade != 'b') && (nacionalidade != 'e')){
        printf("Nacionalidade inválida!");
    }else if((idade < 0) || (idade > 150)){
        printf("Idade inválida!");
    }else{
        if(idade >= 18){
            if(nacionalidade == 'b' || nacionalidade == 'B'){
                if(sexo == 'm' || sexo == 'M'){
                    printf("%s, brasileiro do sexo masculino e maior de idade, está habilitado a dirigir", nome);
                }else{
                    printf("%s, brasileira do sexo feminino e maior de idade, está habilitada a dirigir", nome);
                }
            }else{
                if(sexo == 'm' || sexo == 'M'){
                    printf("%s, estrangeiro do sexo masculino e maior de idade, está habilitado a dirigir", nome);
                }else{
                    printf("%s, estrangeira do sexo feminino e maior de idade, está habilitada a dirigir", nome);
                }
            }
        }else{
            if(nacionalidade == 'b' || nacionalidade == 'B'){
                if(sexo == 'm' || sexo == 'M'){
                    printf("%s, brasileiro do sexo masculino e menor de idade, não está habilitado a dirigir", nome);
                }else{
                    printf("%s, brasileira do sexo feminino e menor de idade, não está habilitada a dirigir", nome);
                }
            }else{
                if(sexo == 'm' || sexo == 'M'){
                    printf("%s, estrangeiro do sexo masculino e menor de idade, não está habilitado a dirigir", nome);
                }else{
                    printf("%s, estrangeira do sexo feminino e menor de idade, não está habilitada a dirigir", nome);
                }
            }
        }
    }


    printf("\n\n");

}