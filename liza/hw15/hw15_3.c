#include <stdio.h>
#include <stdlib.h>
int main(){
    int *array_1 = NULL;
    float *array_2 = NULL;
    int number_of_elements = 0;
    int element;
    int sum = 0;
    float average;
    printf("Array_1 elements: \n");
    while(1){
        scanf("%d", &element);
        if (element == 0){
            break;
        }
        number_of_elements++;
        array_1 = (int *)realloc(array_1, number_of_elements * sizeof(int));
        array_1[number_of_elements - 1] = element;
        sum += element;
    }
    average = (float)sum / number_of_elements;
    array_2 = (float *)malloc(number_of_elements * sizeof(float));
    printf("Array_2 elements: \n");
    for (int i = 0; i < number_of_elements; i++){
        array_2[i] = array_1[i] - average;
        printf("%8.2f ", array_2[i]);
    }
    free(array_2);
    free(array_1);
    return 0;
}



