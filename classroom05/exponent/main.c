#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exponent, result=1;
    printf("Exponent calculator\nEnter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    if(exponent == 0){
        printf("%d^%d = 1",base, exponent);
    }else if(exponent < 0){

        for(int i = -1; i >= exponent; i--){
            result = result * base;
        }

        printf("%d^(%d) = 1 / %d = %f",base, exponent, result, 1.0/result);

    }else if((exponent > 0) && (exponent != 0)){
        for(int i = 1; i <= exponent; i++){
            result = result * base;
        }
        printf("%d^%d = %d",base, exponent, result);
    }
    
    
    
    printf("\n\n");
    return 0;
}
