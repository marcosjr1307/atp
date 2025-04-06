#include <stdio.h>
#include <stdlib.h>

int main(){
    float minimum_wage, exemption_limit_IRS, led_price, lcd_price, led_commission, lcd_commission, gross_salary, net_salary, upper_limit_value;
    int  qty_led, qty_lcd;
    printf("\n\nSalary calculation\n");
    printf("Enter your minimum salary: ");
    scanf("%f", &minimum_wage);
    printf("Enter the limit of the Internal Revenue Service (IRS): ");
    scanf("%f", &exemption_limit_IRS);
    printf("Enter the price of the LED televisions (R$): ");
    scanf("%f", &led_price);
    printf("Enter the quantity of the LED television sold: ");
    scanf("%d", &qty_led);
    printf("Enter the value of the LCD television (R$): ");
    scanf("%f", &lcd_price);
    printf("Enter the quantity of LCD television sold: ");
    scanf("%d", &qty_lcd);
    
    if(qty_led >= 10){
        led_commission = 0.14*qty_led*led_price;
    }else if((qty_led >= 1) && (qty_led < 10)){
        led_commission = 0.13*qty_led*led_price;
    }

    if(qty_lcd >= 20){
        lcd_commission = 0.13*qty_lcd*lcd_price;
    }else if((qty_lcd >= 1) && (qty_lcd <10)){
        lcd_commission = 0.12*qty_lcd*lcd_price;
    }

    gross_salary = minimum_wage + lcd_commission + led_commission;


    net_salary = gross_salary*0.92;


    if(net_salary > exemption_limit_IRS){
        upper_limit_value = net_salary - exemption_limit_IRS;
        net_salary -= upper_limit_value;
        upper_limit_value *= 0.85;
        net_salary += upper_limit_value;
    }

    printf("Gross salary: R$%.2f\nNet salary: R$%.2f", gross_salary, net_salary);



    printf("\n\n");

}