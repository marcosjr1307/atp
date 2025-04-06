#include <stdlib.h>
#include <stdio.h>

int main(){
    int n1;

    printf("Enter a number to see if it's odd/even: ");
    scanf("%d", &n1);
    
    if(n1%2 == 0){
        printf("Even number!");
    }else if(n1%2 != 0){
        printf("Odd number!");
    }

}
