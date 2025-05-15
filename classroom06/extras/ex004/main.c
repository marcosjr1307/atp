#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

void sort_descending_array(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}


int main(){
    int random[SIZE];
    srand(time(NULL));

    for(int i = 0; i < SIZE; i++){
        random[i] = rand() % 101;    
    }

    printf("\nArray: ");
    for(int i ; i < SIZE; i++){
        printf("%d ", random[i]);
    }

    sort_descending_array(random, SIZE);

    printf("\nArray ordenado em ordem decrescente: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", random[i]);
    }
    printf("\n");

    return 0;
}