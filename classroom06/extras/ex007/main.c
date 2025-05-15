#include <stdlib.h>
#include <stdio.h>

int main(){
    int tam_array;
    printf("Enter the size of the array: ");
    scanf("%d", &tam_array);
    int array[tam_array];

    for(int i = 0; i < tam_array; i++){
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int count_distinct = 0;
    int array_distinct[tam_array];
    printf("\nCalculating distinct numbers...\n");
    for(int i = 0; i < tam_array; i++){
        int is_distinct = 1;
        for(int j = 0; j < count_distinct; j++){
            if(array[i] == array_distinct[j]){
                is_distinct = 0;
                break;
            }
        }
        if(is_distinct){
            array_distinct[count_distinct] = array[i];
            count_distinct++;
        }
    }



    printf("The distinc numbers are: ");
    for(int i = 0; i < count_distinct; i++){
        printf("%d ", array_distinct[i]);
    }

    printf("\n\n");
    return 0;
}