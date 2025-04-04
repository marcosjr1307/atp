#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float altura_degrau, altura_final, qtd_degrau;
    
    printf("Insira a altura do degrau em metros: ");
    scanf("%f", &altura_degrau);

    printf("Insira a altura a ser alcançada em metros: ");
    scanf("%f", &altura_final);

    qtd_degrau = altura_final/altura_degrau;
    qtd_degrau = ceil(qtd_degrau);

    printf("A quantidade necessária de degrau(s) é(são): %.0f degrau(s)", qtd_degrau);


    return 0;
}