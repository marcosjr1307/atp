    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main()
    {
        float altura, base;
        setlocale(LC_ALL, "Portuguese");
        printf("C·lculo da ·rea do tri‚ngulo");
        printf("\nAltura (cm): ");
        scanf("%f", &altura);
        printf("Base (cm): ");
        scanf("%f", &base);

        printf("\n¡rea do tri‚ngulo: %.2fcm≤", altura*base/2);
        printf("\n\n");
        return 0;
    }
