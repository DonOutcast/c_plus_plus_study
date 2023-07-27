// Запросите ввод с клавиатуры количество элементов массива. Объявите целочисленный
//  массив и выделите необходимый объем памяти для хранения элементов массива. 
//  Запросите ввод значений элементов массива с клавиатуры. Найдите среднее 
//  арифметическое чётных элементов массива и нечётных элементов массива. Если среднее 
//  арифметическое чётных элементов массива больше среднего арифметического нечётных 
//  элементов массива, то заменить значения всех нечётных элементов массива на ближайшее
//   чётное число в большую сторону, иначе заменить все значения чётных элементов массива
//    на ближайшее нечетное число в меньшую сторону. Если среднее арифметическое чётных
//     элементов и нечётных элементов массива равны — заменить значения 
// всех элементов массива на 0. Вывести элементы массив на экран в строку через пробел.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("enter number of elements: \n");
    scanf("%d", &n);

    int* array = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("enter elements %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int sum_even = 0;
    int count_even = 0;
    int sum_odd = 0;
    int count_odd = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            sum_even += array[i];
            count_even++;
        } else {
            sum_odd += array[i];
            count_odd++;
        }
    }

    int average_even = sum_even / count_even;
    int average_odd = sum_odd / count_odd;
    
    
    if (average_even > average_odd) {
        for (int i = 0; i < n; i++) {
            if (array[i] % 2 != 0) {
                array[i] = (array[i] + 1) ;
            }
        }
    } else if (average_even < average_odd) {
        for (int i = 0; i < n; i++) {
            if (array[i] % 2 == 0) {
                array[i] = (array[i] / 2) * 2 + 1;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            array[i] = 0;
        }
    }
    printf ("average even: %d, average odd: %d \n", average_even, average_odd );
    printf("Result: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
