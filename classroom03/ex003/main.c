#include <stdlib.h>
#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter the 3 sides of the triangle");
    printf("\nSide 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);

    if((a < (b+c)) && (b < (a+c)) && (c < (a+b))){
        if((a == b) && (b == c)){
            printf("\nEquilateral Triangle\n");
        }else if((a == b) || (a == c) || (b == c)){
            printf("\nIsosceles Triangle\n");
        }else{
            printf("\nScalane Triangle\n");
        }
    }else{
        printf("\nThe values entered don't form a triangle!\n");
    }
}