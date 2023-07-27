#include <stdio.h>
#include <stdlib.h>
int main(){
    int number_of_elements;
    printf("Number_of_elements: ");
    scanf("%d", &number_of_elements);
    int *array = (int *)malloc(number_of_elements * sizeof(int));
    printf("Array elements: \n");
    int even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < number_of_elements; i++){
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0){
            even_sum += array[i];
            even_count++;
        } else {
            odd_sum += array[i];
            odd_count++;
        }
    }
    float even_average = (float)even_sum / even_count;
    float odd_average = (float)odd_sum / odd_count;
    if (even_average > odd_average) {
        for (int i = 0; i < number_of_elements; i++) {
            if (array[i] % 2 != 0) {
                array[i] = (array[i] + 1);
            }
        }
    } else if (even_average < odd_average) {
        for (int i = 0; i < number_of_elements; i++) {
            if (array[i] % 2 == 0) {
                array[i] = (array[i] - 1) + 1;
            }
        }
    } else {
        for (int i = 0; i < number_of_elements; i++) {
            array[i] = 0;
        }
    }
    printf("Array 2.0: \n");
    for (int i = 0; i < number_of_elements; i++){
        printf("%d ", array[i]);
    }
    free(array);
    return 0;
}