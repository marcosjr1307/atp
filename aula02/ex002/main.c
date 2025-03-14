#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int ano_nascimento, ano_atual;

    printf("Insira o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Insira o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Sua idade: %d anos", ano_atual - ano_nascimento);

    return 0;
}