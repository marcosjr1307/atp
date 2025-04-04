#include <stdio.h>
#include <stdlib.h>

int main()
{
    float wage;

    printf("Enter yout salary to calculate the adjustment: ");
    scanf("%f", &wage);

    printf("\nThe slary with adjustment: %.2f\n\n", wage*1.25);

    return 0;
}
