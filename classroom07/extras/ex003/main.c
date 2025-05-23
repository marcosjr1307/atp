#include <stdio.h>
#include <stdlib.h>
#define lines 3
#define columns 5

int main(){
    char female_answer[lines][columns], male_answer[lines][columns];
    int match_index[lines][lines];

    int resp;
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            resp = rand() % 3;
            if(resp == 0) female_answer[i][j] = 'Y';
            else if(resp == 1) female_answer[i][j]  = 'N';
            else if(resp == 2) female_answer[i][j] = 'I';
        }
    }

    for(int i = 0; i < lines; i++){
        for(int j = 0; j < columns; j++){
            resp = rand() % 3;
            if(resp == 0) male_answer[i][j] = 'Y';
            else if(resp == 1) male_answer[i][j]  = 'N';
            else if(resp == 2) male_answer[i][j] = 'I';
        }
    }

    printf("\n\n");
    printf("Female answers: \n");
    for(int i = 0; i < lines; i++){
        for(int j =0; j < columns; j++){
            printf("%c ", female_answer[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMale answers: \n");
    for(int i = 0; i < lines; i++){
        for(int j =0; j < columns; j++){
            printf("%c ", male_answer[i][j]);
        }
        printf("\n");
    }

    int sum;
    for(int i = 0; i < lines; i++){
        sum = 0;
        for(int k = 0; k < lines; k++){
            for(int j = 0; j < columns; j++){
                if(female_answer[i][j] == male_answer[k][j]) sum++;   
            }
            match_index[i][k] = sum;
            sum = 0;
        }
    }

    printf("\n\nMatch Index:\n");
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < lines; j++){
            printf("%d ", match_index[i][j]);
        }
        printf("\n");
    }
}