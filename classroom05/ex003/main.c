#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, divider=0;
   printf("Program to see how many prime numbers there are between 1 and the given number");
   printf("\nEnter the number: ");
   scanf("%d", &n);
   printf("Prime numbers: 1");
   for(int h = 1; h <= n; h++){
       for(int i = 1; i <= h; i++){
            if(h != 1){
                if(h % i == 0){
                    divider++;
                }
            }
        }
       
        if(divider == 2){
            printf(" %d", h);
            divider = 0;
        }else{
            divider = 0;
        }
   }

   return 0;
}