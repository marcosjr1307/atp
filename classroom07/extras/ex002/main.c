#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lines 3
#define columns 3

int main(){
    srand(time(NULL));
    int matrix[lines][columns];

    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = rand() % 2;
        }
    }

    int is_lower_trinagular_matrix = 1;
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            if(i < j){
                if(matrix[i][j] != 0) is_lower_trinagular_matrix = 0;
            }
        }
    }

    printf("\nMatrix: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    if(is_lower_trinagular_matrix) printf("\n\nThe matrix is lower triangular!\n");
    else printf("\n\nThe matrix isn't lower triangular!\n");


    return 0;
}