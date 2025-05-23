#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lines 5
#define columns 5

int main(){
    srand(time(NULL));
    int matrix[lines][columns];

    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = rand() % 10;
        }
    }

    printf("\n\nMatrix: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int matrix_aux[2][lines*columns];
    int j_index = 0;
    int repeat = 0;
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            repeat = 0;
            for(int k = 0; k < lines; k++){
                for(int l = 0; l < columns; l++){
                    if(matrix[i][j] == matrix[k][l]) repeat++;
                }
            }
            matrix_aux[0][j_index] = matrix[i][j];
            matrix_aux[1][j_index] = repeat;
            j_index++;
        }
    }

    int is_distinct;
    int matrix_aux_distinct[2][j_index];
    int tam = 0;
    for(int i = 0; i < j_index; i++){
        is_distinct = 1;
        for(int j = 0; j < i; j++){
            if(matrix_aux[0][i] == matrix_aux[0][j]){
                is_distinct = 0;
                break;
            }
        }

        if(is_distinct){
            matrix_aux_distinct[0][tam] = matrix_aux[0][i];
            matrix_aux_distinct[1][tam] = matrix_aux[1][i];
            tam++;
        }
    }

    printf("\n");
    int qty = 0;
    for(int i = 0; i < tam; i++){
        if(matrix_aux_distinct[1][i] > 1) {
            printf("Element: %d\nRepeat: %d\n\n", matrix_aux_distinct[0][i], matrix_aux_distinct[1][i]);
            qty++;
        }
    }

    if(qty == 0){
        printf("No one element is repeated in the matrix\n");
    }

    printf("\n\n");
    return 0;
}