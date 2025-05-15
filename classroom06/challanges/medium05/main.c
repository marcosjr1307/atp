#include <stdlib.h>
#include <stdio.h>

int main(){
    long long n;
    int vet[16];;
    scanf("%lld", &n);
    
    for(int i = 15; i >= 0; i--){
        vet[i] = n % 10;
        n /= 10;
    }

    for(int i = 0; i < 16; i+=2){
        if(vet[i] * 2 > 9){
            vet[i] = (vet[i] * 2) - 9;
        }else{
            vet[i] = vet[i] * 2;
        }
    }
    
    int soma = 0;
    for(int i = 0; i < 16; i++){
        soma+= vet[i];
    }


    if(soma % 10 == 0) printf("Cartao Valido");
    else printf("Cartao Invalido");

    return 0;
}