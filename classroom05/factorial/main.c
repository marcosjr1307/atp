#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, result=1;
    printf("Enter the number to calculate its factorial: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        result = result * i;
    }
    printf("Result: %d", result);


    printf("\n\n");
    return 0;
}
