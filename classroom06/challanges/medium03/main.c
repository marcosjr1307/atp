#include <stdlib.h>
#include <stdio.h>

int main(){
    int channel, qty, channel04 = 0, channel05 = 0, channel07 = 0, channel12 = 0, sum_qty = 0;

    do{ 
        scanf("%d", &channel);
        scanf("%d", &qty);
        if((channel != 0) && ((channel == 4) || (channel == 5) || (channel == 7) || (channel == 12))){
            sum_qty += qty;
            if(channel == 4) channel04 += qty;
            else if(channel == 5) channel05 += qty;
            else if(channel == 7) channel07 += qty;
            else if(channel == 12) channel12 += qty;

        } 
    }while(channel != 0);

    if(channel04 != 0) printf("Canal 4: %.2f%%\n", (float) channel04*100/sum_qty);
    if(channel05 != 0) printf("Canal 5: %.2f%%\n", (float) channel05*100/sum_qty);
    if(channel07 != 0) printf("Canal 7: %.2f%%\n", (float) channel07*100/sum_qty);
    if(channel12 != 0) printf("Canal 12: %.2f%%\n", (float) channel12*100/sum_qty);

    return 0;
}