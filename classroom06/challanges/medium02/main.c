#include <stdlib.h>
#include <stdio.h>
#define PI 3.1415926
#include <math.h>

int main(){
    int p = 1, q = 1;
    float d, interval_up, interval_down, division;
    scanf("%f", &d);

    interval_up = PI + d;
    interval_down = PI - d;

    division = (float) p/q;
    while((division < interval_down) || (division > interval_up)){
        if(division < PI) p++;
        else if(division > PI) q++;
        division = (float) p/q;

    };

    printf("%d %d %f", p, q, (float)p/q);

    return 0;
}