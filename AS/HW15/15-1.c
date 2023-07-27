// Запросите (ввод с клавиатуры) количество элементов массива. Объявите целочисленный
//  массив и выделите необходимый объем памяти для хранения элементов массива. 
//  Запросите ввод значений элементов массива с клавиатуры. Отсортируйте массив 
//  по возрастанию и выведите элементы отсортированного массива на экран через пробел.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

      int* array = (int*)malloc(n * sizeof(int));

       for (int i = 0; i < n; i++) {
        printf("enter elements %d: ", i + 1);
        scanf("%d", &array[i]);
    }

       for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}

