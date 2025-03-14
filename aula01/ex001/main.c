#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float n1, n2, n3, media;
    int p1, p2, p3, somaPeso;


    setlocale(LC_ALL,"Portuguese");
    printf("Cálculo de média ponderada com 3 notas\n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Peso 1: ");
    scanf("%d", &p1);

    printf("\nNota 2: ");
    scanf("%f", &n2);
    printf("Peso 2: ");
    scanf("%d", &p2);

    printf("\nNota 3: ");
    scanf("%f", &n3);
    printf("Peso 3: ");
    scanf("%d", &p3);

    somaPeso = p1+p2+p3;
    media = (n1*p1) + (n2*p2) + (n3*p3);
    media = media/somaPeso;

    printf("\nMédia: %.2f", media);
    printf("\n\n");



    


    return 0;
}
