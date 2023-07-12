// 3.Напишите программу, которая вычисляет количество элементов массива, бо́льших, 
// чем среднее арифметическое всех элементов массива. Программа должна запрашивать
// ввод значений элементов массива с клавиатуры (10 целочисленных элементов, каждый 
// вводится в отдельной строке). Программа должна вывести количество элементов массива, 
// бо́льших значения среднего арифметического всех элементов. Подсчет количества элементов
//  оформите в виде функции, которая возвращает искомое количество, а в качестве 
//  параметра получает массив. Поиск среднего арифметического оформите в виде 
//функции, которая возвращает искомое значение, а в качестве параметра получает массив.

#include <stdio.h>


float find_average(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (float)sum / size;
}


int count_average(int array[], int size) {
    float average = find_average(array, size);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > average) {
            count++;
        }
    }
    return count;
}

int main() {
    int array[10];
    printf("enter 10 digits \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    int count = count_average(array, 10);
    printf("number of elements greater than average: %d\n", count);
    return 0;
}
