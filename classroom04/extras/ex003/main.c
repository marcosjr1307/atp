#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, average;
    printf("Enter your grades\n");
    printf("Grade 1: ");
    scanf("%f", &n1);
    printf("Grade 2: ");
    scanf("%f", &n2);

    if(((n1 >= 0) && (n1 <= 10)) && ((n2 >= 0) && (n2 <= 10))){
        average = (n1 * 0.4) + (n2 * 0.6);
        printf("Average: %.2f", average);
    }else{
        printf("Invalid grade");
    }

}