#include <stdlib.h>
#include <stdio.h>
#define lines 2
#define columns 2


int main(){
    int matrix[lines][columns];

    printf("Enter the matrix: \n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            printf("Enter the number [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    int matrix_tranpose[columns][lines];
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            matrix_tranpose[i][j] = matrix[j][i];
        }
    }

    printf("Matrix: \n");
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < lines; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix tranpose: \n");
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < lines; j++){
            printf("%d ", matrix_tranpose[i][j]);
        }
        printf("\n");
    }
    int is_simetric = 1;
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            if(matrix[i][j] != matrix_tranpose[i][j]){
                is_simetric = 0;
                break;
            }
        }
    }

    if(is_simetric) printf("The matrix is SIMETRIC\n");
    else printf("The matrix is NOT SIMETRIC\n");
    printf("\n\n");

    return 0;
}