#include <stdlib.h>
#include <stdio.h>

int main(){
    int n=0, sum=0;

    do{
        printf("Enter a positive number to see if it's perfect: ");
        scanf("%d", &n);
    }while(n <= 0);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum+=i;
        }
    }

    if(sum == n){
        printf("1");
        for(int i = 1; i < n; i++){
            if((n % i == 0) && (i != 1)){
                printf(" + %d", i);
            }
        }
        printf(" = %d", n);
        printf("\nThe number %d IS PERFECT", n);
    }else{
        printf("The number %d isn't perfect", n);
    }

    printf("\n\n");
    return 0;
}