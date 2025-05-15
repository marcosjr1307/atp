#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam_array, number;
    printf("Enter the size of the array: ");
    scanf("%d", &tam_array);
    int array[tam_array+1];

    printf("\nEnter the numbers in the array increasingly:\n");
    for(int i = 0; i < tam_array; i++){
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nEnter a number to insert in the array, so it remains increasingly:\n");
    scanf("%d", &number);
    int value_replaced, h;
    for(int i = 0; i < tam_array; i++){
        if(number <= array[i]){
            value_replaced = array[i];
            array[i] = number;
            h = i;
            break;
        }
    }
    int temp;
    for(int i = h+1; i < tam_array+1; i++){
       temp = array[i];
       array[i] = value_replaced;
       value_replaced = temp;
    }

    printf("\nThe new replaced array is:\n");
    for(int i = 0; i < tam_array+1; i++){
        printf("%d ", array[i]);
    }


    return 0;
}