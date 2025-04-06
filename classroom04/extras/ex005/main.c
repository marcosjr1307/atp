#include <stdio.h>
#include <stdlib.h>

int main(){
    char gender;
    int age, hired_year, employed_time;
    float base_salary, final_salary;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender (F) or (M): ");
    scanf(" %c", &gender);
    printf("Enter your base salary (R$): ");
    scanf("%f", &base_salary);
    printf("Enter the year you were hired: ");
    scanf("%d", &hired_year);
    employed_time = 2025 - hired_year;

    if((age >= 18) && (age <= 39)){
        if(gender == 'M'){
            final_salary = base_salary * 1.10;
            if(employed_time <= 10){
                final_salary -= 10;
            }else if(employed_time > 10){
                final_salary += 17;
            }
        }else if(gender == 'F'){
            final_salary = base_salary * 1.08;
            if(employed_time <= 10){
                final_salary -= 11;
            }else if(employed_time > 10){
                final_salary += 16;
            }
        }
    }else if((age >= 40) && (age <= 69)){
        if(gender == 'M'){
            final_salary = base_salary * 1.08;
            if(employed_time <= 10){
                final_salary -= 5;
            }else if(employed_time > 10){
                final_salary += 15;
            }
        }else if(gender == 'F'){
            final_salary = base_salary * 1.10;
            if(employed_time <= 10){
                final_salary -= 7;
            }else if(employed_time > 10){
                final_salary += 14;
            }
        }
    }else if((age >= 70) && (age <= 99)){
        if(gender == 'M'){
            final_salary = base_salary * 1.15;
            if(employed_time <= 10){
                final_salary -= 15;
            }else if(employed_time > 10){
                final_salary += 13;
            }
        }else if(gender == 'F'){
            final_salary = base_salary * 1.17;
            if(employed_time <= 10){
                final_salary -= 17;
            }else if(employed_time > 10){
                final_salary += 12;
            }
        }
    }

    printf("Final salary: R$%.2f", final_salary);



    printf("\n\n");

}