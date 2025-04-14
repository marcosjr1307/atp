#include <stdio.h>
#include <stdlib.h>

int main(){
    int option = 2, qty_interviwed = 0, qty_meals, qty_interviwed_less10=0, qty_interviwed_between10and20=0, qty_interviwed_more20=0;
    do{
        printf("How many meals did you eat last month?: ");
        scanf("%d", &qty_meals);
        if(qty_meals < 10) qty_interviwed_less10++;
        else if((qty_meals >= 10) && (qty_meals <= 20)) qty_interviwed_between10and20++;
        else if(qty_meals > 20) qty_interviwed_more20++;
        qty_interviwed++;
        printf("Do you want to end the search? (1)Yes (2)No: ");
        scanf("%d", &option);
    }while(option == 2);
    printf("\nResults\n");
    printf("Quantity of students interviwed: %d students\n", qty_interviwed);
    printf("Quantity of students who ate less than 10 meals: %d students\n", qty_interviwed_less10);
    printf("Quantity of students who ate between 10 and 20 meals: %d students\n", qty_interviwed_between10and20);
    printf("Quantity of students that ate more than 20 meals: %d students\n", qty_interviwed_more20);

    printf("\n\n");
    return 0;
}