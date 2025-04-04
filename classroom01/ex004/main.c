#include <stdio.h>
#include <stdlib.h>

int main(){
    //1 foot = 12 inches
    //1 yard = 3 feet
    //1 mile = 1760 yards
    float n1;

    printf("Enter a value in feet to see the convertions: ");
    scanf("%f", &n1);
    float yards = n1/3;
    printf("\n%.2f feet are %.2f inches", n1, n1*12);
    printf("\n%.2f feet are %.2f yards", n1, yards);
    printf("\n%.2f feet are %.2f miles", n1, yards/1760);


    return 0;
}
