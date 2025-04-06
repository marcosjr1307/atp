#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, delta, x1, x2;
    printf("Calculation of quadratic equation!\n");
    printf("Enter the value of each coefficient following the pattern ax² + bx + c = 0\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("The (a) variable must be difent from 0 to be a quadratic equation");
    }else{
        printf("Δ = (%.0f)² - 4 * %.0f * %.0f", b, a, c);
        delta = b*b - ( 4 * a * c);
        printf("\nΔ = %.2f", delta);
        printf("\n");
        if(delta < 0){
            printf("\nThere aren't real roots");
        }else if(delta == 0){
            x1 = - b / (2*a);
            printf("\nThere's only one root\n");
            printf("\n x = - %.2f / 2 * %.2f  =>  x = %.2f", b, a, x1);
            printf("\nS = {%.2f}", x1);
        }else{
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("\nThere're 2 possible real roots\n");
            printf("\nx1 = - %.2f + √%.2f / 2 * %.2f  =>  x1 = %.2f", b, delta, a, x1);
            printf("\nx2 = - %.2f - √%.2f / 2 * %.2f  =>  x2 = %.2f", b, delta, a, x2);
            printf("\nS = {%.2f,%.2f}", x1, x2);
        }
    }

    printf("\n\n");

}