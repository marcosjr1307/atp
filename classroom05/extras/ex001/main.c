#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main(){
    char name[50];
    int n1,n2;
    float average;

    for(int i = 0; i < MAX; i++){
        printf("Enter your name: ");
        gets(name);

        do{
            printf("Grade 1: ");
            scanf("%d", &n1);
            if((n1 < 0) || (n1 > 10)) printf("Invalid grade!\n");
        }while((n1 < 0) || (n1 > 10));

        do{
            printf("Grade 2: ");
            scanf("%d", &n2);
            if((n2 < 0) || (n2 > 10)) printf("Invalid grade!\n");
        }while((n2 < 0) || (n2 > 10));
        getchar();

        average = (n1+n2)/2.0;
        printf("Student %s has the average: %.2f\n", name, average);
    }

    printf("\n\n");
    int cont = MAX;
    do{
        cont--;
        printf("Enter your name: ");
        gets(name);

        do{
            printf("Grade 1: ");
            scanf("%d", &n1);
            if((n1 < 0) || (n1 > 10)) printf("Invalid grade!\n");
        }while((n1 < 0) || (n1 > 10));

        do{
            printf("Grade 2: ");
            scanf("%d", &n2);
            if((n2 < 0) || (n2 > 10)) printf("Invalid grade!\n");
        }while((n2 < 0) || (n2 > 10));
        getchar();

        average = (n1+n2)/2.0;
        printf("Student %s has the average: %.2f\n", name, average);
    }while(cont != 0);


    printf("\n\n");
    cont = MAX;
    while(cont != 0){
        cont--;
        printf("Enter your name: ");
        gets(name);

        do{
            printf("Grade 1: ");
            scanf("%d", &n1);
            if((n1 < 0) || (n1 > 10)) printf("Invalid grade!\n");
        }while((n1 < 0) || (n1 > 10));

        do{
            printf("Grade 2: ");
            scanf("%d", &n2);
            if((n2 < 0) || (n2 > 10)) printf("Invalid grade!\n");
        }while((n2 < 0) || (n2 > 10));
        getchar();

        average = (n1+n2)/2.0;
        printf("Student %s has the average: %.2f\n", name, average);
    };

    return 0;
}