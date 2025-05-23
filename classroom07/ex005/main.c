#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int matrix[7][7];
    int largest_number_lines[7];
    int minor_number_columns[7];

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            matrix[i][j] = rand() % 10;
        }
    }

    int largest_number;
    for(int i = 0; i < 7; i++){
        largest_number = matrix[i][0];
        for(int j = 0; j < 7; j++){
            if(largest_number <= matrix[i][j]){
                largest_number = matrix[i][j];
            }
        }
        largest_number_lines[i] = largest_number;
    }

    int minor_number;
    for(int j = 0; j < 7; j++){
        minor_number = matrix[0][j];
        for(int i = 0; i < 7; i++){
            if(minor_number >= matrix[i][j]){
                minor_number = matrix[i][j];
            }
            minor_number_columns[j] = minor_number;
        }
    }
    
    printf("Matrix: \n");
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\nLargest number of each line: \n");
    for(int i = 0; i < 7; i++){
        printf("%d ", largest_number_lines[i]);
    }

    printf("\n\nMinor number of each column: \n");
    for(int j = 0; j < 7; j++){
        printf("%d ", minor_number_columns[j]);
    }

    return 0;
}