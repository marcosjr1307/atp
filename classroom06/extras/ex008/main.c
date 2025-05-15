#include <stdlib.h>
#include <stdio.h>

int main(){
    int tam_array, position, value;
    printf("Enter the size of the array: ");
    scanf("%d", &tam_array);
    int initial_array[tam_array];
    int second_array[tam_array+1];

    for(int i = 0; i < tam_array; i++){
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &initial_array[i]);
    }

    printf("\nEnter a value to insert in the array at a specific position");
    printf("\nEnter the position (0 to %d): ", tam_array);
    scanf("%d", &position);
    printf("Enter the value: ");
    scanf("%d", &value);

    if(position < 0 || position > tam_array){
        printf("Invalid position\n");
        return 0;
    }else{
        for(int i = 0; i < position; i++){
            second_array[i] = initial_array[i];
        }
        second_array[position - 1] = value;
        for(int i = position; i < tam_array + 1; i++){
            second_array[i] = initial_array[i-1];
        }
    }

    printf("The new array is: ");
    for(int i = 0; i < tam_array + 1; i++){
        printf("%d ", second_array[i]);
    }

    printf("\n\n");
    return 0;
}