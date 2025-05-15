#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[7];

    for(int i = 0; i < 7; i++){
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];
    for(int i = 1; i < 7; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    for(int i = 0; i < 7; i++){
        printf("%d ", vet[i] * maior);
    }


    return 0;
}