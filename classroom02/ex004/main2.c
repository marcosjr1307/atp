#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float time, minutes_part;
    int hours_part, minutes;
    printf("Enter the time in numeric format (Exemple: 4:30 = 4.30): ");
    scanf("%f", &time);
    
    hours_part= (int) time;
    minutes_part = (time - hours_part);
    minutes_part *= 100;
    hours_part*=60;
    
    minutes = hours_part + minutes_part;

    printf("Time: %d minutes", minutes);

    return 0;
}