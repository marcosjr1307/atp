    #include <stdlib.h>
    #include <stdio.h>

    int main(){
        int n, tam = 0;
        scanf("%d", &n);
        int temp = n;
        while(1){
            temp = temp / 2;
            tam++;
            if(temp == 0) break;
        }

        int vet[tam];
        temp = n;
        for(int i = 0; i < tam; i++){
            vet[i] = temp % 2;
            temp = temp / 2;
        }

        for(int i = tam - 1; i >= 0; i--){
            printf("%d", vet[i]);
        }


        return 0;
    }