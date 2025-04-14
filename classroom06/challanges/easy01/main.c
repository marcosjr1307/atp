#include <stdlib.h>
#include <stdio.h>

int main(){
    int x, y, n;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &n);
    while((n % x == 0) || (n % y == 0)){
        if((n % x == 0) && (n % y == 0)) printf("%d e %d\n", x, y);
        else if(n % x == 0) printf("%d\n", x);
        else if(n % y == 0) printf("%d\n",y);
        scanf("%d", &n);
    }

    return 0;
}