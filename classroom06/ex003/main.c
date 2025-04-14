#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int main(){
    int array1[MAX], array2[MAX/2];

    printf("\nArray 1\n");
    for(int i = 0; i < MAX; i++){
        printf("(%d): ", i+1);
        scanf("%d", &array1[i]);
    }

    printf("\nArray 2\n");
    for(int i = 0; i < MAX/2; i++){
        printf("(%d): ", i+1);
        scanf("%d", &array2[i]);
    }

    printf("\n");
    int div;
    for(int i = 0; i < MAX; i++){
        printf("Number %d\n", array1[i]);
        div = 0;
        for(int j = 0; j < MAX/2; j++){
            if(array1[i] % array2[j] == 0){
                div++;
                printf("Divisible by %d in position %d\n", array2[j], j+1);
            }
        }
        if(div == 0){
            printf("Number %d hasn't divisors in array2!\n", array1[i]);
        }
        printf("\n");
    }

    return 0;
}