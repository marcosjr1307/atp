#include <stdlib.h>
#include <stdio.h>
#define lines 10
#define columns 20
#include <time.h>

int main(){
    int matrix[lines][columns];  
    int array[lines];
    srand(time(NULL));

    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = rand() % 11;
        }
    }

    printf("Matrix: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < lines; i++){
        int sum = 0;
        for(int j = 0; j < columns; j++){
            sum+= matrix[i][j];
        }
        array[i] = sum;
    }

    
    for(int i = 0; i < lines; i ++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] *= array[i];
        }
    }

    printf("\n\nArray: \n");
    for(int i = 0; i < lines; i++){
        printf("%d ", array[i]);
    }

    printf("\n\nMatrix multiplied by the array: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }






    return 0;
}