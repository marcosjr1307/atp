#include <stdlib.h>
#include <stdio.h>

int main(){
    int month, year;

     printf("Enter a month (number) to see the how many days it has: ");
    scanf("%d", &month);
    
    if(month<=12){
        if(month == 2){
            printf("Enter the year: ");
            scanf("%d", &year);
            if((year%400 == 0) || ((year%4 == 0) && !(year % 100 == 0))){
                printf("29 days");
            }else{
                printf("28 days");
            }
        }else if(month == 8){
            printf("31 days");
        }else{
            if((month != 2) && (month != 8) && (month % 2 ==0)){
                printf("30 days");
            }else if((month != 2) && (month != 8) && (month % 2 != 0)){
                printf("31 days");
            }
        }
    }else{
        printf("Invalid month!");
    }
    

    return 0;
}