#include <stdio.h>
#include <stdlib.h>

int main(){
    float deposit, interest_rate, income;

    printf("Enter the deposit's amount: ");
    scanf("%f", &deposit);

    printf("Enter the intereset_rate: ");
    scanf("%f", &interest_rate);

    income = deposit * interest_rate;

    printf("Income value: R$%.2f\nTotal amount: R$%.2f", income, income+deposit);


    return 0;
}