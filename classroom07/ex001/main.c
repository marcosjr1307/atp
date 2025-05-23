#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(){
    float grade[MAX][3];

    for(int i = 0; i < MAX; i++){
        printf("Enter the grades of the student %d: \n", i + 1);
        printf("Enter the first grade: ");
        scanf("%f", & grade[i][0]);
        printf("Enter the second grade: ");
        scanf("%f", & grade[i][1]);
        printf("Enter the third grade: ");
        scanf("%f", & grade[i][2]);
        printf("\n");
    }

    float minor = 10.0;
    int i_minor = 0;
    int minor_first = 0, minor_second = 0, minor_third = 0;
    printf("Report: \n");
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < 3; j++){
            if(minor >= grade[i][j]){
                minor = grade[i][j];
                i_minor = j + 1;
            }
        }
        printf("Student %d\n", i + 1);
        printf("Lowest grade on the test: %d\nGrade: %.2f", i_minor, minor);
        printf("\n\n");
        minor = 10;
        if(i_minor == 1) minor_first++;
        else if(i_minor == 2) minor_second++;
        else if(i_minor == 3) minor_third++;
    }
    printf("Number of students with the lowest grade on the first test: %d\n", minor_first);
    printf("Number of students with the lowest grade on the second test: %d\n", minor_second); 
    printf("Number of students with the lowest grade on the third test: %d\n", minor_third);

    return 0;
}