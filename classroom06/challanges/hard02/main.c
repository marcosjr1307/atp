#include <stdlib.h>
#include <stdio.h>


int main(){
    int vet[10], vet_aux[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    int cont = 0;
    int i = 0;
    int aux = 0;
    int loop = 0;
    vet_aux[0] = 0;
    while(1){
        int valor = vet[i];
        cont++;
        for(int j = 0; j < 10; j++){
            if(vet_aux[j] == valor){
                loop = 1;
                aux = j;
                break;
            }
        }
        if(loop == 1){
            break;
        }else{
            vet_aux[cont] = valor;
            loop = 0;
        }
       
        i = valor;
    }
    

    for(int j = aux; j < 10; j++){
        if(vet_aux[j] != -1){
            printf("%d ", vet_aux[j]);
        }
    }


    return 0;
}