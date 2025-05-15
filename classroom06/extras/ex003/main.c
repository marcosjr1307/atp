#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
    int even_numbers[SIZE], odd_numbers[SIZE], qty_even = 0, qty_odd = 0, number;
    printf("Enter numbem to separate them in even or odd (Enter -1 to stop)\n");
    do{
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number != -1){
            if(number % 2 == 0){
                if(qty_even < SIZE){
                    even_numbers[qty_even] = number;
                    qty_even++;
                }else{
                    printf("The even numbers array is full\n");
                }
            }else if(number % 2 != 0){
                if(qty_odd < SIZE){
                    odd_numbers[qty_odd] = number;
                    qty_odd++;
                }else{
                    printf("The odd numbers array is full\n");
                }
            }
        }
    }while(number != -1);

    printf("\nEven number:\n");
    if(qty_even == 0){
        printf("No even numbers were entered\n");
    }else{
        for(int i = 0; i < qty_even; i++){
            printf("%d ", even_numbers[i]);
        }
    }

    printf("\nOdd number:\n");
    if(qty_odd == 0){
        printf("No odd numbers were entered\n");
    }else{
        for(int i = 0; i < qty_odd; i++){
            printf("%d ", odd_numbers[i]);
        }
    }

    printf("\n\n");
    return 0;
}