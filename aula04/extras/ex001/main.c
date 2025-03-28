#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    printf("\n\nJogo de adivinhação de animal");
    printf("Em qual espécie de animal você está pensando?\n(1) Mamífero\n(2) Ave\n(3) Réptil\n");
    printf("Insira a opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        int opcaoMamifero;
        printf("Certo, você está pensando em um mamífero, agora me diga como ele desloca-se: \n(1) Quadrúpede\n(2) Bípede\n(3) Voador\n(4) Aquático\n");
        printf("Insira a opção: ");
        scanf("%d", &opcaoMamifero);
        switch (opcaoMamifero)
        {
        case 1:
            int opcaoQuadrupede;
            printf("Um quadrúpede, para finalizar me diga se ele é: \n(1)Carnívoro\n(2)Herbívoro\n");
            printf("Insira a opção: ");
            scanf("%d", &opcaoQuadrupede);
            if(opcaoQuadrupede == 1) printf("\n\nSEU ANIMAL É UM LEÃO\n\n");
            else if(opcaoQuadrupede == 2) printf("\n\nSEU ANIMAL É UM CAVALO\n\n");
            else printf("Opção inválida");
            break;
        case 2:
            int opcaoBipede;
            printf("Um bípede, para finalizar me diga se ele é: \n(1)Onívoro\n(2)Frutífero\n");
            printf("Insira a opção: ");
            scanf("%d", &opcaoBipede);
            if(opcaoBipede == 1) printf("\n\nSEU ANIMAL É UM HOMEM\n\n");
            else if(opcaoBipede == 2) printf("\n\nSEU ANIMAL É UM MACACO\n\n");
            else printf("Opção inválida");
            break;
        case 3:
            printf("\n\nSEU ANIMAL É UM MORCEGO\n\n");
            break;
        case 4:
            printf("\n\nSEU ANIMAL É UMA BALEIA\n\n");
            break;
        default:
            printf("Opção inválida!");
            break;
        }
        break;
    case 2:
        int opcaoAve;
        printf("Certo, você está pensando em uma ave, agora me diga se ela é: \n(1) Não-voadora\n(2) Nadadora\n(3) De Rapina\n");
        printf("Insira a opção: ");
        scanf("%d", &opcaoAve);
        switch (opcaoAve)
        {
        case 1:
            int opcaoNaoVoadora;
            printf("Uma não voadora, para finalizar me diga se ela é: \n(1) Tropical\n(2) Polar\n");
            printf("Insira a opção: ");
            scanf("%d", &opcaoNaoVoadora);
            if(opcaoNaoVoadora == 1) printf("\n\nSEU ANIMAL É UM AVESTRUZ\n\n");
            else if(opcaoNaoVoadora == 2)printf("\n\nSEU ANIMAL É UM PINGUIM\n\n");
            else printf("Opção inválida");
            break;
        case 2:
            printf("\n\nSEU ANIMAL É UM PATO\n\n");
            break;
        case 3:
            printf("\n\nSEU ANIMAL É UMA ÁGUIA\n\n");
            break;
        default:
            printf("Opção inválida!");
            break;
        }
        break;
    case 3:
        int opcaoReptil;
        printf("Certo, você está pensando em um réptil, agora me diga se ele é do tipo: \n(1) Com casco\n(2) Carnívoro\n(3) Sem patas\n");
        printf("Insira a opção: ");
        scanf("%d", &opcaoReptil);
        if(opcaoReptil == 1) printf("\n\nSEU ANIMAL É UMA TARTARUGA\n\n");
        else if(opcaoReptil == 2) printf("\n\nSEU ANIMAL É UM CROCODILO\n\n");
        else if(opcaoReptil == 3) printf("\n\nSEU ANIMAL É UMA COBRA\n\n");
        else printf("Opção inválida");
        break;

    default:
        printf("Opção inválida");
        break;
    }
}