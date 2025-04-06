#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, c;
    
    printf("Enter 3 values to see which one is the largest");
    printf("\nValue 1: ");
    scanf("%d", &a);
    printf("Value 2: ");
    scanf("%d", &b);
    printf("Value 3: ");
    scanf("%d", &c);

    printf("Ordering: ");
    if(a>=b && a>=c && b>=c){
        printf("%d  %d  %d", c, b,a );
    }else if(a>=b && a>=c && b<=c){
        printf("%d  %d  %d", b, c, a);
    }else if(a>=b && a<=c){ //b<c
        printf("%d  %d  %d", b, a, c);
    }else if(a<=b && b>=c && a>=c){ 
        printf("%d  %d  %d", c, a, b);
    }else if(a<=b && b>=c && a<=c){
        printf("%d  %d  %d", a, c, b);
    }else if(a <=b && b<=c){
        printf("%d  %d  %d", a, b, c);
    }
}