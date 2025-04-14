#include <stdlib.h>
#include <stdio.h>

int main(){

    int a, b, remainder, temp, b_initial, a_initial;
    printf("Greatest commom divisor(GCD) calculator\n");
    printf("Enter the numbers to calculate the GCD(a,b)\n");
    printf("Value a: ");
    scanf("%d", &a);
    printf("Value b: ");
    scanf("%d", &b);
    a_initial = a;
    b_initial = b;

    if(a > b){
        remainder = a % b;
        while(remainder != 0){
            temp = remainder;
            remainder = b % remainder;
            b = temp;
        }
        printf("\nResult: GCD(%d,%d): %d",a,b_initial, b);
    }else if(a < b){
        remainder = b % a;
        while(remainder != 0){
            temp = remainder;
            remainder = a % remainder;
            a = temp;
        }
        printf("\nResult: GCD(%d,%d): %d",b,a_initial, a);
    }else if(a == b){
        printf("\nResult: GCD(%d,%d): %d", a, b, a);
    }



    return 0;
}