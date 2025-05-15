#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam_array;
    printf("Enter the size of the array: ");
    scanf("%d", &tam_array);
    int array[tam_array];

    for(int i = 0; i < tam_array; i++){
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray: \n");
    for(int i = 0; i < tam_array; i++){
        printf("%d ", array[i]);
    }

    printf("\nEnter the position of the number you want to remove: ");
    int position;
    scanf("%d", &position);
    position--;
    for(int i = position; i < tam_array - 1;i++){
        array[i] = array[i+1];
    }
    array[tam_array - 1] = 0;

    printf("\nThe new array is:\n");
    for(int i = 0; i < tam_array - 1; i++){
        printf("%d ", array[i]);
    }

    printf("\n\n");

    return 0;
}