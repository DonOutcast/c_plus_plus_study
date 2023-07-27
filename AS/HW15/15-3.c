// Объявите целочисленный массив, количество элементов заранее не известно. Организуйте 
// ввод элементов массива, пока не будет введен 0. Создайте массив действительных чисел
//  с таким же количеством элементов, заполните его значениями — разность значения
//   соответствующего элемента первого массива и среднего арифметического всех элементов 
//   первого массива. Выведите на экран в строку элементы второго 
// массива в формате 8 знакомест под всё число и 2 знакоместа под дробную часть.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = NULL;
    double* resultArray = NULL;
    int size = 0;
    int value;
    int sum = 0;
    double avg;

    
    while (1) {
        printf("enter elements:\n");
        scanf("%d", &value);

        if (value == 0) {
            break;
        }

        size++;

        array = realloc(array, size * sizeof(int));
        resultArray = realloc(resultArray, size * sizeof(double));

        array[size - 1] = value;
        sum += value;
    }

    if (size == 0) {
        printf("empty\n");
        free(array);
        free(resultArray);
        return 0;
    }

    avg = (double)sum / size;

    for (int i = 0; i < size; i++) {
        resultArray[i] = array[i] - avg;
    }

    printf("result:\n");
    for (int i = 0; i < size; i++) {
        printf("%8.2lf ", resultArray[i]);
    }
    printf("\n");

    free(array);
    free(resultArray);

    return 0;
}
