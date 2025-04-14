#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    int d;
    int f; 
    int total = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int i = 0; i < 5; i++){
            scanf("%d", &d);
            if(d == 1) total+=120; 
        }
        for(int i = 0; i < 2; i++){
            scanf("%d", &f);
            if(f == 1) total += 50;
        }
    }

    printf("%d", total);

    return 0;
}