#include <stdio.h>
#include <stdlib.h>

int main(){
    int birth_year, current_year;

    printf("Enter your year of birth: ");
    scanf("%d", &birth_year);
    printf("Enter the current year: ");
    scanf("%d", &current_year);

    printf("Your age: %d years old", current_year - birth_year);

    return 0;
}