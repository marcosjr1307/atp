#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define line 3
#define column 3

int main(){
    srand(time(NULL));
    int matrix[line][column];

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("[%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix: \n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int minor;
    int index_i = 0;
    int index_j = 0;
    for(int i = 0; i < line; i++){
        minor = matrix[i][0];
        for(int j = 0; j < column; j++){
            if(matrix[i][j] <= minor){
                minor = matrix[i][j];
                index_j = j;
            }
        }

        int largest = matrix[0][index_j];
        for(int k = 0; k < line; k++){
            if(matrix[k][index_j] >= largest){
                largest = matrix[k][index_j];
                index_i = k;
            }
        }
        if(minor == largest){
            printf("\nSaddle point found!\nValue: %d\nLine: %d\nColumn: %d\n\n", largest, index_i, index_j);
        }

    }
    return 0;
}