#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float salario_minimo, limite_isencao_IRFP, preco_led, preco_lcd, comissao_led, comissao_lcd, salario_bruto, salario_liquido, valor_superior_limite;
    int  qtd_led, qtd_lcd;
    setlocale(LC_ALL, "Portuguese");
    printf("\n\nCálculo salário\n");
    printf("Informe seu salário mínimo: ");
    scanf("%f", &salario_minimo);
    printf("Informe o limite de isenção do Imposto sobre Renda das Pessoas Físicas (IRPF): ");
    scanf("%f", &limite_isencao_IRFP);
    printf("Informe o valor dos televisores LED (R$): ");
    scanf("%f", &preco_led);
    printf("Informe a quantidade de televisores LED vendidos: ");
    scanf("%d", &qtd_led);
    printf("Informe o valor dos televisores LCD (R$): ");
    scanf("%f", &preco_lcd);
    printf("Informe a quantidade de televisores LCD vendidos: ");
    scanf("%d", &qtd_lcd);
    
    //Calculando LED
    if(qtd_led >= 10){
        comissao_led = 0.14*qtd_led*preco_led;
    }else if((qtd_led >= 1) && (qtd_led < 10)){
        comissao_led = 0.13*qtd_led*preco_led;
    }

    //Calculando LCD
    if(qtd_lcd >= 20){
        comissao_lcd = 0.13*qtd_lcd*preco_lcd;
    }else if((qtd_lcd >= 1) && (qtd_lcd <10)){
        comissao_lcd = 0.12*qtd_lcd*preco_lcd;
    }

    salario_bruto = salario_minimo + comissao_lcd + comissao_led;
    //INSS
    salario_liquido = salario_bruto*0.92;

    //IRPF
    if(salario_liquido > limite_isencao_IRFP){
        valor_superior_limite = salario_liquido - limite_isencao_IRFP;
        salario_liquido -= valor_superior_limite;
        valor_superior_limite *= 0.85;
        salario_liquido += valor_superior_limite;
    }

    printf("Salário bruto: R$%.2f\nSalário líquido: R$%.2f", salario_bruto, salario_liquido);



    printf("\n\n");

}