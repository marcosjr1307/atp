#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int main(){
    float unit_value[MAX], total_sale;
    int qty_sold[MAX], best_selling = 0, position;

    for(int i = 0; i < MAX; i++){
        printf("Enter the unit value of the product (R$): ");
        scanf("%f", &unit_value[i]);
        printf("How many units of this product were saled: ");
        scanf("%d", &qty_sold[i]);

        if(qty_sold[i] > best_selling) best_selling = qty_sold[i];
    }

    printf("\n");
    for(int i = 0; i < MAX; i++){
        printf("Product %d\n", i+1);
        printf("Quantity saled: %d\n", qty_sold[i]);
        printf("Unit value: R$%.2f\n", unit_value[i]);
        printf("Total value: R$:%.2f\n",qty_sold[i] * unit_value[i]);
        total_sale += qty_sold[i] * unit_value[i];
        if(best_selling == qty_sold[i]) position = i;
        printf("\n");
    }

    printf("\nTotal sale: R$%.2f\n", total_sale);
    printf("\nProduct %d was the best selling\nPostion in the array: %d\nUnit value: R$%.2f\nQuantity saled: %d\nTotal value: R$%.2f", position+1, position, unit_value[position], qty_sold[position], qty_sold[position] * unit_value[position]);

    printf("\n\n");

    return 0;
}