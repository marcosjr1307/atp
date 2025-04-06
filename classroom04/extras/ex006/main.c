#include <stdio.h>
#include <stdlib.h>

int main(){
    char gender, nationality, name[50];
    int age;
    
    printf("Enter your name: ");
    gets(name);
    printf("Enter your gender (F) ou (M): ");
    scanf(" %c", &gender);
    printf("Enter your nationality. Use (b) for Brazilian or (e) for foreigner: ");
    scanf(" %c", &nationality);
    printf("Enter your age: ");
    scanf("%d", &age);

    if((gender != 'M') && (gender != 'F') && (gender != 'm') && (gender != 'f')){
        printf("Invalid gender!");
    }else if((nationality != 'B') && (nationality != 'E') && (nationality != 'b') && (nationality != 'e')){
        printf("Invalid nationality!");
    }else if((age < 0) || (age > 150)){
        printf("Invalid age!");
    }else{
        if(age >= 18){
            if(nationality == 'b' || nationality == 'B'){
                if(gender == 'm' || gender == 'M'){
                    printf("%s, brazilian male of legal age, is able to drive", name);
                }else{
                    printf("%s, brazilian female of legal age, is able to drive", name);
                }
            }else{
                if(gender == 'm' || gender == 'M'){
                    printf("%s, foreigner male of legal age, is able to drive", name);
                }else{
                    printf("%s, foreigner female of legal age, is able to drive", name);
                }
            }
        }else{
            if(nationality == 'b' || nationality == 'B'){
                if(gender == 'm' || gender == 'M'){
                    printf("%s, brazilian male and minor age, isn't able to drive", name);
                }else{
                    printf("%s, brazilian female and minor age, isn't able to drive", name);
                }
            }else{
                if(gender == 'm' || gender == 'M'){
                    printf("%s, foreigner male and minor age, isn't able to drive", name);
                }else{
                    printf("%s, foreigner female and minor age, isn't able to drive", name);
                }
            }
        }
    }


    printf("\n\n");

}