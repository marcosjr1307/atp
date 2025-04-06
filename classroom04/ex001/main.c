#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    char option;
    float n1, n2, result;
    printf("\n\nOptions menu\n(+) Sum two number\n(-) Subtract two numbers\n(*) Multiply two numbers\n(/) Divide two numbers\n(@) Square root of one number\n Enter the symbols shown to perform the desired operation!\nEnter the desired option: ");
    scanf("%c", &option);

    switch (option)
    {
    case '+':
        printf("Enter the values you want to sum: ");
        printf("\nValue 1: ");
        scanf("%f", &n1);
        printf("Value 2: ");
        scanf("%f", &n2);
        result = n1 + n2;
        printf("%.0f + %.0f = %.0f", n1, n2, result);
        break;
    case '-':
        printf("Enter the values you want to subtract: ");
        printf("\nValue 1: ");
        scanf("%f", &n1);
        printf("Value 2: ");
        scanf("%f", &n2);
        result = n1 - n2;
        printf("%.0f - %.0f = %.0f", n1, n2, result);
        break;
    case '*':
        printf("Enter the values you want to multiply: ");
        printf("\nValue 1: ");
        scanf("%f", &n1);
        printf("Value 2: ");
        scanf("%f", &n2);   
        result = n1 * n2;
        printf("%.0f * %.0f = %.0f", n1, n2, result);
        break;
    case '/':
        printf("Enter the values you want to divide: ");
        printf("\nValue 1: ");
        scanf("%f", &n1);
        printf("Value 2: ");
        scanf("%f", &n2);
        result = n1 / n2;
        printf("%.2f / %.2f = %.2f", n1, n2, result);
        break;
    case '@':
        printf("Enter the value to calculate it square root: ");
        printf("\nValue: ");
        scanf("%f", &n1);
        result = sqrt(n1);
        printf("The square root of %.2f = %.2f", n1, result);
        break;
    
    default:
        printf("Invalid operation");
        break;
    }
    printf("\n\n");
}