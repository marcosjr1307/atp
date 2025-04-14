#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int random_number, n1;
    srand(time(NULL));


    printf("Guessing game!\n");
    random_number = rand() % 101;
    printf("Try guessing the random number entering your number: ");
    scanf("%d", &n1);
    int qty_try = 1;
    if(random_number == n1){
        printf("Congratulation! You guessed the number on your first try!");
    }else{
        while(n1 != random_number){
            qty_try++;
            if(n1 > random_number){
                printf("The random number is smaller!");
                printf("\nTry number %d: ", qty_try);
                scanf("%d", &n1);
            }else if(n1 < random_number){
                printf("The random number is bigger!");
                printf("\nTry number %d: ", qty_try);
                scanf("%d", &n1);
            }
        }
        printf("Nice! You guessed the number on your try number %d!\nThe number was %d", qty_try, random_number);
    }
    printf("\n\n");
    return 0;
}