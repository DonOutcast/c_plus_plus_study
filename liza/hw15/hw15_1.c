#include <stdio.h>
#include <stdlib.h>
void sorting_an_array(int *array, int number_of_elements){
    for(int i = 0; i < number_of_elements - 1; i++){
        for (int j = i + 1; j < number_of_elements; j++){
            if (array[i] > array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main(){
    int number_of_elements;
    printf("Number_of_elements: ");
    scanf("%d", &number_of_elements);
    int *array = (int *)malloc(number_of_elements * sizeof(int));
    printf("Array elements: ");
    for (int i = 0; i < number_of_elements; i++){
        scanf("%d", &array[i]);
    }
    sorting_an_array(array, number_of_elements);
    printf("Array in ascending order: \n");
    for (int i = 0; i < number_of_elements; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}