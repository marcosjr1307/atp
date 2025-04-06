#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;

    printf("Enter two numbers\n");
    printf("Value 1: ");
    scanf("%d",  &n1);
    printf("Value 2: ");
    scanf("%d", &n2);

    if((n1 % 2 == 0) && (n2 % 2 == 0)){
        printf("Two even numbers");
        printf("\nResutl: %d (n1+n2)", n1+n2);
    }else if((n1 % 2 != 0) && (n2 % 2 != 0)){
        printf("Two odd numbers");
        printf("\nResult: %d (n1-n2)", n1-n2);
    }else if((n1 % 2 == 0) && (n2 % 2 != 0)){
        printf("The first is even and the second is odd");
        printf("\nResult: %d (n1*n2)", n1*n2);
    }else if((n1 % 2 != 0) && (n2 % 2 == 0)){
        printf("The first is odd and the second is even");
        printf("\nResult: %.2f (n1/n2)", (float) n1/n2);
    }
    printf("\n\n");
}