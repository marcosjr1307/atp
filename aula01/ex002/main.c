#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salario;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o seu sal�rio para calcular o reajuste: ");
    scanf("%f", &salario);

    printf("\Sal�rio com reajuste: %.2f\n\n", salario*1.25);

    return 0;
}
