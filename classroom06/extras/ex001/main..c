#include <stdlib.h>
#include <stdio.h>
#define MAX 3

int main(){
    char answer_key[8], student_answer[8];
    int student_number[MAX], correct_answers = 0, percentage_approved = 0, student_correct_answers[MAX];;

    printf("Enter the answer key: \n");
    for(int i = 0; i < 8; i++){
        printf("Enter answer %d: ", i + 1);
        scanf(" %c", &answer_key[i]);
    }

    
    for(int i = 0; i < MAX; i++){
        printf("\n");
        printf("Enter the student number: ");
        scanf("%d", &student_number[i]);
        for(int i = 0; i < 8; i++){
            printf("Enter the answer %d: ", i + 1);
            scanf(" %c", &student_answer[i]);
            if(answer_key[i] == student_answer[i]) correct_answers++;
        }
        if(correct_answers >= 6) percentage_approved += 1;
        student_correct_answers[i] = correct_answers;
        correct_answers = 0;
    }


    for(int i = 0; i < MAX; i++){
        printf("\n");
        printf("Student number %d: \n", student_number[i]);
        printf("Correct answers (Grade): %d\n", student_correct_answers[i]);
        if(student_correct_answers[i] >= 6) printf("Status: Approved\n");
        else printf("Status: Disapproved\n");
    }

    printf("\nPercentage of approved students: %.2f%%\n", (percentage_approved * 100.0) / MAX);   




}