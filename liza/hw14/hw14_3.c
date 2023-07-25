#include <stdio.h>
void doubling_the_value(int size, int *array){
    for (int i = 0; i < size; i++){
        *(array + i) *= 2;
    }
}
int main(){
    int array[10];
    printf("Array elements: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    doubling_the_value(10, array);
    printf("Array elements 2.0: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}