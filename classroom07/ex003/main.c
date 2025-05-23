#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int matrix[4][7];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            matrix[i][j] = rand() % 11;
        }
    }

    printf("Matrix: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int minor = matrix[0][0];
    int i_minmax = 0;
    int j_minmax = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            if(minor >= matrix[i][j]){
                minor = matrix[i][j];
                i_minmax = i;
            }
        }
    }

    int minmax = matrix[i_minmax][0];
    for(int i = 0; i < 7; i++){
        if(minmax <= matrix[i_minmax][i]){
            minmax = matrix[i_minmax][i];
            j_minmax = i;
        }
    }

    printf("\n\nThe MINMAX number is: %d\n", minmax);
    printf("Line: %d\n", i_minmax);
    printf("Column: %d\n", j_minmax);

    return 0;
}