#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float horario, parte_minutos;
    int parte_hora, minutos;
    printf("Insira um horário em formato numérico (Exemplo: 4:30 = 4.30): ");
    scanf("%f", &horario);
    
    parte_hora = (int) horario;
    parte_minutos = (horario - parte_hora);
    parte_minutos *= 100;
    parte_hora*=60;
    
    minutos = parte_hora + parte_minutos;

    printf("Horário em minutos: %d minutos", minutos);

    return 0;
}