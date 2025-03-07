#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //1 pe =12 polegada
    //1 jarda = 3 pes
    //1 milha = 1760 jardas
    float n1;

    printf("Insira um valor em pés para saber as conversões: ");
    scanf("%f", &n1);
    float jardas = n1/3;
    printf("\n%.2f pés são %.2f polegadas", n1, n1*12);
    printf("\n%.2f pés são %.2f jardas", n1, jardas);
    printf("\n%.2f pés são %.2f milhas", n1, jardas/1760);


    return 0;
}
