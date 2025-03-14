#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float deposito, taxaJuros, rendimento;

    printf("Informe o valor do depósito: ");
    scanf("%f", &deposito);

    printf("Informe a taxa de juros em decimal: ");
    scanf("%f", &taxaJuros);

    rendimento = deposito * taxaJuros;

    printf("O valor do rendimento: R$%.2f\nO valor total: R$%.2f", rendimento, rendimento+deposito);


    return 0;
}