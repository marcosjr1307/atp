#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    char opcao;
    float n1, n2, resultado;
    printf("\n\nMenu de opções\n(+) Somar dois números\n(-) Subtrair dois números\n(*) Multiplicar dois números\n(/) Dividir dois números\n(@) Raiz quadrada de um número\n Insira os símbolos demonstrados para realizar a operação desejada!\nDigite a opção desejada: ");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case '+':
        printf("Insira os valores que deseja somar: ");
        printf("\nValor 1: ");
        scanf("%f", &n1);
        printf("Valor 2: ");
        scanf("%f", &n2);
        resultado = n1 + n2;
        printf("%.0f + %.0f = %.0f", n1, n2, resultado);
        break;
    case '-':
        printf("Insira os valores que deseja subtrair: ");
        printf("\nValor 1: ");
        scanf("%f", &n1);
        printf("Valor 2: ");
        scanf("%f", &n2);
        resultado = n1 - n2;
        printf("%.0f - %.0f = %.0f", n1, n2, resultado);
        break;
    case '*':
        printf("Insira os valores que deseja multiplicar: ");
        printf("\nValor 1: ");
        scanf("%f", &n1);
        printf("Valor 2: ");
        scanf("%f", &n2);   
        resultado = n1 * n2;
        printf("%.0f * %.0f = %.0f", n1, n2, resultado);
        break;
    case '/':
        printf("Insira os valores que deseja dividir: ");
        printf("\nValor 1: ");
        scanf("%f", &n1);
        printf("Valor 2: ");
        scanf("%f", &n2);
        resultado = n1 / n2;
        printf("%.2f / %.2f = %.2f", n1, n2, resultado);
        break;
    case '@':
        printf("Insira o valor para calcular sua raíz quadrada: ");
        printf("\nValor: ");
        scanf("%f", &n1);
        resultado = sqrt(n1);
        printf("A raíz quadrade de %.2f = %.2f", n1, resultado);
        break;
    
    default:
        printf("Operação inválida");
        break;
    }
    printf("\n\n");
}