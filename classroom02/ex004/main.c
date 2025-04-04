#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double horario, parte_minutos, parte_hora, minutos;
    printf("Insira um horário em formato numérico (Exemplo: 4:30 = 4.30): ");
    scanf("%lf", &horario);

    parte_minutos = modf(horario, &parte_hora);
    minutos = parte_hora*60 + parte_minutos*100;
    printf("Horário em minutos: %.0lf", minutos);

    return 0;
}