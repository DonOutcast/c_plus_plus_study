// Задача 2: Создание двумерного массива
// Напишите программу, которая запрашивает у пользователя количество строк и столбцов 
// для двумерного массива. Выделите память для двумерного массива и заполните его 
// случайными числами , найдите самую большую сумму чисел. в столбце.
//  Выведите содержимое массива на экран. 
// После завершения работы с массивом, освободите выделенную память.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns;
    
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("enter the number of columns: ");
    scanf("%d", &columns);
        
    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(columns * sizeof(int));
    }
    
    printf("Enter the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    int maxSum = 0;

    for (int j = 0; j < columns; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += array[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
    }
    
        printf("Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    printf("max sum of the numbers: %d\n", maxSum);
    
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    
    return 0;
}