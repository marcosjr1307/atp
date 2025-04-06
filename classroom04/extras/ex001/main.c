#include <stdio.h>
#include <stdlib.h>

int main(){
    int option;
    printf("\n\nAnimal guessing game");
    printf("Which specie of animal are you thinking?\n(1) Mammal\n(2) Bird\n(3) Reptiles\n");
    printf("Enter the option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1: {
        int mammal_option;
        printf("Alright, you're thinkg of a mammal, now tell me how it moves: \n(1) Quadrupede\n(2) Biped\n(3) Flying\n(4) Aquatic\n");
        printf("Enter the option: ");
        scanf("%d", &mammal_option);
        switch (mammal_option)
        {
        case 1:{
            int quadrupede_option;
            printf("A quadrupede, finally tell me if it is: \n(1)Carnivore\n(2)Herbivore\n");
            printf("Enter the option: ");
            scanf("%d", &quadrupede_option);
            if(quadrupede_option == 1) printf("\n\nYOUR ANIMAL IS A LION\n\n");
            else if(quadrupede_option == 2) printf("\n\nYOUR ANIMAL IS A HOURSE\n\n");
            else printf("Invalid operation");
            break;
        }
        case 2:{
            int biped_option;
            printf("A biped, finally tell me if it is: \n(1)Omnivorous\n(2)Fruitfull\n");
            printf("Enther the option: ");
            scanf("%d", &biped_option);
            if(biped_option == 1) printf("\n\nYOUR ANIMAL IS A HUMAN\n\n");
            else if(biped_option == 2) printf("\n\nYOUR ANIMAL IS A MONKEY\n\n");
            else printf("Invalid operation");
            break;
        }
        case 3:
            printf("\n\nYOUR ANIMAL IS A BAT\n\n");
            break;
        case 4:
            printf("\n\nYOUR ANIMAL IS A WHALE\n\n");
            break;
        default:
            printf("Invalid operation!");
            break;
        }
        break;
    }
    case 2:{
        int bird_option;
        printf("Alright, you're thinkg of a bird, now tell me if it is: \n(1) Non-flying\n(2) Swimmer\n(3) Of prey\n");
        printf("Enther the option: ");
        scanf("%d", &bird_option);
        switch (bird_option)
        {
        case 1:{
            int non_flying_option;
            printf("A non-flying, finally tell me if it is: \n(1) Tropical\n(2) Polar\n");
            printf("Enther the option: ");
            scanf("%d", &non_flying_option);
            if(non_flying_option == 1) printf("\n\nYOUR ANIMAL IS AN OSTRICH\n\n");
            else if(non_flying_option == 2)printf("\n\nYOUR ANIMAL IS A PENGUIM \n\n");
            else printf("Invalid operation");
            break;
        }
        case 2:
            printf("\n\nYOUR ANIMAL IS A DUCK\n\n");
            break;
        case 3:
            printf("\n\nYOUR ANIMAL IS A EAGLE\n\n");
            break;
        default:
            printf("Invalid operation!");
            break;
        }
        break;
    }
    case 3:{
        int reptiles_option;
        printf("Alright, you're thinking of a reptiles, now tell me if it's the type: \n(1) With shell\n(2) Carnivore\n(3) Without paws\n");
        printf("Enther the option: ");
        scanf("%d", &reptiles_option);
        if(reptiles_option == 1) printf("\n\nYOUR ANIMAL IS A TURTLE\n\n");
        else if(reptiles_option == 2) printf("\n\nYOUR ANIMAL IS A CROCODILE\n\n");
        else if(reptiles_option == 3) printf("\n\nYOUR ANIMAL IS A SNAKE\n\n");
        else printf("Invalid operation");
        break;
    }
    default:
        printf("Invalid operation");
        break;
    }
}