#include <stdio.h>
#include <stdlib.h>
int main(){
    int *array;
    int number_of_elements;
    printf("Number of elements: ");
    scanf("%d", &number_of_elements);
    array = (int *)malloc(number_of_elements * sizeof(int));
    int sum = 0;
    for (int i = 0; i < number_of_elements; i++){
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d\n", sum);

    free(array);
    return 0;
}