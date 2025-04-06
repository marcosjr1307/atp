#include <stdio.h>
#include <stdlib.h>

int main(){
    float weight, height, bmi;
    printf("Body Mass Index calculation (BMI)");
    printf("\n Enter your weight (KG): ");
    scanf("%f", &weight);
    printf("Enter your height (m): ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is %.2f\n", bmi);
    if(bmi < 18.5){
        printf("You are below your ideal weight");
    }else if((bmi >= 18.5) && (bmi <= 24.9)){
        printf("Congratulations — You're in your normal weight!");
    }else if((bmi >= 25) && (bmi <= 29.9)){
        printf("You're over your weight (overweight)");
    }else if((bmi >= 30) && (bmi <= 34.9)){
        printf("Obese class I");
    }else if((bmi >= 35) && (bmi <= 39.9)){
        printf("Obese class II");
    }else if(bmi >= 40){
        printf("Obese class III");
    }

    printf("\n\n");

}