// Запросите (ввод с клавиатуры) количество элементов массива.
// Объявите целочисленный массив и выделите необходимый объем памяти для хранения элементов массива.
// Запросите ввод значений элементов массива с клавиатуры.
//  Отсортируйте массив по возрастанию и выведите элементы отсортированного массива на экран через пробел.
#include <stdio.h>
#include <stdlib.h>
void sorting_an_array(int *array,int size){
       for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (array[j + 1] < array[j]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main(){
    int size = 0;
    printf("Input sizze: ");
    scanf("%d",&size);
    int *array = NULL;
    array = (int*)malloc(size*sizeof(int));
    if (array == NULL){
        printf("ERROR\n");
    }else{
        for (int i = 0; i < size; i++)
        {
            printf("Input array[%d]: ",i);
            scanf("%d",&array[i]);
        }
    }
    sorting_an_array(array,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
        

    free(array);
    return 0;
}