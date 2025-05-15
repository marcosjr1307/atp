#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam_array;
    printf("Enter an even size for the array: ");
    scanf("%d", &tam_array);
    int array[tam_array];

    if(tam_array % 2 == 0){
        printf("\n");
        for(int i = 0; i < tam_array; i++){
            printf("Enter the number %d: ", i + 1);
            scanf("%d", &array[i]);
        }
    }
    else{
        printf("The size of the array must be even\n");
        return 0;
    }

    for(int i = 0; i < tam_array; i++){
        if(array[i] != array[tam_array - 1 - i]){
            printf("The array is not palindrome\n");
            return 0;
        }
    }

    printf("\nThe array is palindrome!\n");



    return 0;
}