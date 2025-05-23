#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matrix_m[4][6];
    int matrix_n[6][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            matrix_m[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            matrix_n[i][j] = rand() % 10;
        }
    } 

    printf("\nMatrix m: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 6; j++){
            printf("%d ", matrix_m[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix n: \n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matrix_n[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum;
    for(int i = 0; i < 4; i++){
        sum = 0;
        for(int j = 0; j < 6; j++){
            sum+= matrix_m[i][j];
            sum+= matrix_n[j][i];
        }
        printf("\nSoma %d = %d", i + 1, sum);
    }

    return 0;
}