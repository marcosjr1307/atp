#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int random_number[10], n1, guessed = 0;
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        random_number[i] = rand() % 21;
    }

    printf("Try to guess the random number between 0 and 20!\n");
    scanf("%d", &n1);

    for(int i = 0; i < 10; i++){
        if(n1 == random_number[i]){
            printf("\nYou guessed the number %d\nThe position of the number in the array is at %d", n1, random_number[i]);
            guessed = 1;
            break;
        }
    }

    if(guessed == 0){
        printf("\nThe number %d was not found in the array", n1);
    }



    return 0;
}