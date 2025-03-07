#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salario;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o seu salário para calcular o reajuste: ");
    scanf("%f", &salario);

    printf("\Salário com reajuste: %.2f\n\n", salario*1.25);

    return 0;
}
