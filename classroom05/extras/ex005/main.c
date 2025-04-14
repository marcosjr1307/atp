#include <stdlib.h>
#include <stdio.h>

int main(){
    int course_code = -1, open_positions=0, male_candidates=0, female_candidates=0, total_candidates=0, largest_candidate_vacancy_course;
    float largest_candidate_vacancy = 0;
    printf("Research about or entrance exam\n");
    
    printf("Course code (0 to end the research): ");
    scanf("%d", &course_code);

    if(course_code != 0){
        while(course_code != 0){
            printf("Number of open positions: ");
            scanf("%d", &open_positions);
            printf("Number of male candidates: ");
            scanf("%d", &male_candidates);
            printf("Number of female candidates: ");
            scanf("%d", &female_candidates);
            total_candidates += male_candidates + female_candidates;

            printf("\nResult\n");
            printf("Course: %d\n", course_code);
            printf("Candidate per vacancy: %.2f\n", (float)total_candidates/open_positions);
            printf("Percentage of female candidates: %.2f%%\n", (female_candidates*100.0)/total_candidates);
            if(((float)total_candidates/open_positions) > largest_candidate_vacancy){
                largest_candidate_vacancy = (float)total_candidates/open_positions;
                largest_candidate_vacancy_course = course_code;
            }

            printf("\nCourse code (0 to end the research): ");
            scanf("%d", &course_code);
        }

        printf("\nTotal candidates: %d candidates\n", total_candidates);
        printf("Largest candidates per vacancy: %.2f\n", largest_candidate_vacancy);
        printf("Course code with largest candidates per vacancy: %d", largest_candidate_vacancy_course);
    }  

    printf("\n\n");

    return 0;
}