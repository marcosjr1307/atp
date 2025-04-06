#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float step_height, final_height, qty_step;
    
    printf("Enter the steps height in meters: ");
    scanf("%f", &step_height);

    printf("Enter the  height to be reached in meters: ");
    scanf("%f", &final_height);

    qty_step = final_height/step_height;
    qty_step = ceil(qty_step);

    printf("The necessary quantity of step(s) is(are): %.0f step(s)", qty_step);
    printf("\n\n");

    return 0;
}