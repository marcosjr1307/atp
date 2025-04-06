#include <stdlib.h>
#include <stdio.h>

int main(){
    int year;
    printf("Enter a year to see if it's a leap year: ");
    scanf("%d", &year);

    if((year%400 == 0) || ((year%4 == 0) && !(year % 100 == 0))){
        printf("year %d is a leap year", year);
    }else{
        printf("year %d isn't a leap year", year);
    }
    
    return 0;
}