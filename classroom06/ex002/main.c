#include <stdlib.h>
#include <stdio.h>
#define MAX 10

int main(){
    int array1[MAX], array2[MAX], array3[MAX*2];

    printf("\nArray 1\n");
    for(int i = 0; i < MAX; i++){
        printf("(%d): ", i+1);
        scanf("%d", &array1[i]);
    }

    printf("\nArray 2\n");
    for(int i = 0; i < MAX; i++){
        printf("(%d): ", i+1);
        scanf("%d", &array2[i]);
    }

    int cont = 0;
    for(int i = 1; i < MAX*2; i+=2){
        array3[i] = array2[cont];
        cont++;
    }

    cont = 0;
    for(int i = 0; i < MAX*2; i+=2){
        array3[i] = array1[cont];
        cont++;
    }

    printf("\nArray 3\n");
    for(int i = 0; i < MAX*2; i++){
        printf("%d ", array3[i]);
    }

    return 0;
}