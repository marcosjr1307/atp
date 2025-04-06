#include <stdlib.h>
#include <stdio.h>

int main(){
    char gender, answer, interrupt;
    int age, qty_male_not = 0, qty_female_yes = 0, qty_interviewed=0, qty_yes=0, qty_not=0;

    do{
        printf("\n");
        do{
            printf("Enter your gender (M or F): ");
            scanf(" %c", &gender);

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }while((gender != 'F') && (gender !='M') && (gender !='f') && (gender !='m'));
        
        qty_interviewed++;
        
        printf("\n");
        do{
            printf("Enter your age (18 to 70): ");
            scanf("%d", &age);

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }while((age <18) || (age > 70));

        printf("\n");
        do{
            printf("Are you enjoying the new product launched on the market?\n(Y)Yes (N)Not (I)Indifferent: ");
            scanf("%c", &answer);

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }while((answer != 'Y') && (answer !='y') && (answer !='N') && (answer !='n') && (answer !='I') && (answer !='i'));
        
        if(((answer == 'Y') || (answer == 'y')) && ((gender == 'F') || (gender == 'f'))) qty_female_yes++;
        if(((answer == 'N') || (answer == 'n')) && ((gender == 'M') || (gender == 'm'))) qty_male_not++;
        if((answer == 'Y') || (answer == 'y')) qty_yes++;
        if((answer == 'N') || (answer == 'n')) qty_not++;

        printf("\n");
        do{
            printf("Do you want to finish the search and see the results? (Y)Yes or (N)Not: ");
            scanf("%c", &interrupt);

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }while((interrupt != 'Y') && (interrupt != 'y') && (interrupt != 'N') && (interrupt != 'n'));
    }while((interrupt != 'Y') && (interrupt != 'y'));


    printf("Total number of people interviewed: %d",qty_interviewed);
    printf("\nTotal number of people who answerd Yes: %d",qty_yes);
    printf("\nTotal number of people who answerd Not: %d",qty_not);
    printf("\nPercentage of people who answerd Not: %.2f%%", (qty_not*100.0)/qty_interviewed);
    printf("\nPercentage of female who answerd Yes: %.2f%%", (qty_female_yes*100.0)/qty_interviewed);
    printf("\nPercentage of male who answerd No: %.2f%%", (qty_male_not*100.0)/qty_interviewed);

    return 0;
}