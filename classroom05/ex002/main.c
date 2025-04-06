#include <stdio.h>
#include <stdlib.h>


int main()
{
    int age, quantity=0;
   
    printf("Enter 5 persons age to know which of them are of legal age\n");
    for(int i = 1; i <= 5; i++){
        printf("Person %d: ", i);
        scanf("%d", &age);
        if(age >= 18){
            quantity++;
        }
    }
    printf("There are %d legal age persons", quantity);
   
   

    return 0;
}