#include <stdlib.h>
#include <stdio.h>

int main(){

    int q=1, r=1; // q/r
    float h = 0; 
    do{
        h += (float) q/r;
        q+=2;
        r++;
    }while((q <= 99) && (r <= 50));

    printf("Result: %f", h);

    return 0;
}