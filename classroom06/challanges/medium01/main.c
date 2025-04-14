#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    for(int i = n; i > 0 ; i--){
        if(i == 1){
            printf("eu odeio o pantano");
        }else if(i % 2 == 0){
            printf("eu amo mas tambem ");
        }else if(i % 2 != 0){
            printf("eu odeio mas tambem ");
        }
    }

    return 0;
}