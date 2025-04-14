#include <stdlib.h>
#include <stdio.h>

int main(){
    int largest = 0, n;

    printf("Enter a number to see which ones were the largest (0 to finish): ");
    do{
        scanf("%d", &n);
        while(n < 0){
            printf("Invalid number (can't be negative)! Please enter a new number: ");
            scanf("%d", &n);
        };
        if(n >= largest) largest = n;
        if(n != 0) printf("Enter a number to see which ones were the largest (0 to finish): ");
        
    }while(n != 0);

    printf("\n\nLargest number entered: %d", largest);
    printf("\n\n");
    return 0;
}