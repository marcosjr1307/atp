#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1, n2, n3, weighted_average;
    int p1, p2, p3, sum_wheight;


    printf("Weighted average calculation with 3 grades\n");
    printf("Grade 1: ");
    scanf("%f", &n1);
    printf("Weight 1: ");
    scanf("%d", &p1);

    printf("\nGrade 2: ");
    scanf("%f", &n2);
    printf("Weight 2: ");
    scanf("%d", &p2);

    printf("\nGrade 3: ");
    scanf("%f", &n3);
    printf("Weight 3: ");
    scanf("%d", &p3);

    sum_wheight = p1+p2+p3;
    weighted_average = (n1*p1) + (n2*p2) + (n3*p3);
    weighted_average /= sum_wheight;

    printf("\nAverage: %.2f", weighted_average);
    printf("\n\n");



    


    return 0;
}
