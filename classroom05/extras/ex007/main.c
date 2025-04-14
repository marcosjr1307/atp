#include <stdlib.h>
#include <stdio.h>

int main(){
    int sum = 0;
    for(int i = 1; i < 500; i+=2){
        if(i % 3 == 0){
            sum+=i;
        }
    }

    printf("Result: %d", sum);

    return 0;
}