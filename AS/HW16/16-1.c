// Задача 1: Выделение памяти для одномерного массива
// Напишите программу, которая запрашивает у пользователя размер массива
//  (количество элементов) и затем динамически выделяет память для этого массива.
//   Заполните массив случайными числами и выведите его на экран, далее если сумма
//    чисел по главной диагонали больше 10 измените все числа по диагонали на
//    10 иначе на 5. 
// После завершения работы с массивом, освободите выделенную память.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("enter size of the array: ");
    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));

    printf("enter the array\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("First array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    if (sum > 10) {
        for (int i = 0; i < size; i++) {
            array[i] = 10;
        }
    } else {
        for (int i = 0; i < size; i++) {
            array[i] = 5;
        }
    }

    printf("Final array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}