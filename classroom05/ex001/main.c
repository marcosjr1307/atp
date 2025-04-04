#include <stdio.h>
#include <stdlib.h>

int main(){
    float height_a = 1.5, height_b = 1.1;
    int years = 0;

    while(height_a > height_b){
        height_a += 0.02;
        height_b += 0.03;
        years++;
    }

    printf("%d years", years);

    printf("\n\n");
    return 0;
}
