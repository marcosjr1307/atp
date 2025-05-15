#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam_array, mayor, menor;

    printf("Enter the size of the array: ");
    scanf("%d", &tam_array);
    int array[tam_array];

    for(int i = 0; i < tam_array; i++){
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nCalculating the amplitude of the array (maior number - menor number)...\n");
    mayor = array[0];
    menor = array[0];
    for(int i = 0; i < tam_array; i++){
        if(array[i] > mayor){
            mayor = array[i];
        }
        if(array[i] < menor){
            menor = array[i];
        }
    }

    printf("The amplitude of the array is: %d - %d = %d\n", mayor, menor, mayor - menor);
    printf("\n\n");

    return 0;
}