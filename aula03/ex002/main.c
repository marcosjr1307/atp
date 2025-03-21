#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    
    printf("Insira 3 valores para ver qual o maior");
    printf("\nValor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    printf("Valor 3: ");
    scanf("%d", &c);

    printf("Ordenação: ");
    if(a>=b && a>=c && b>=c){
        printf("%d  %d  %d", c, b,a );
    }else if(a>=b && a>=c && b<=c){
        printf("%d  %d  %d", b, c, a);
    }else if(a>=b && a<=c){ //b<c
        printf("%d  %d  %d", b, a, c);
    }else if(a<=b && b>=c && a>=c){ 
        printf("%d  %d  %d", c, a, b);
    }else if(a<=b && b>=c && a<=c){
        printf("%d  %d  %d", a, c, b);
    }

}