    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        float height, base;
        printf("Triangle area calculation   ");
        printf("\nHeight (cm): ");
        scanf("%f", &height);
        printf("Base (cm): ");
        scanf("%f", &base);

        printf("\nTriangle area: %.2fcm", height*base/2);
        printf("\n\n");
        return 0;
    }
