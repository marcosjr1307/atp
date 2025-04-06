#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double time, minutes_part, hours_part, minutes;
    printf("Enter the time in numeric format (Exemple: 4:30 = 4.30): ");
    scanf("%lf", &time);

    minutes_part = modf(time, &hours_part);
    minutes = hours_part*60 + minutes_part*100;
    printf("Time: %.0lf minutes", minutes);

    return 0;
}