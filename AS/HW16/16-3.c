// Задача 3: Создание двумерного массива
// Напишите программу, которая запрашивает у пользователя количество строк и столбцов 
// для двумерного массива. Выделите память для двумерного массива и заполните его
//  случайными числами .После заполнения – посчитать сумму элементов отдельно в
//   каждом столбце и каждой строке. 
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
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter elements of the array [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    
    int* columns_sum = (int*)calloc(columns, sizeof(int));
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            columns_sum[j] += array[i][j];
        }
    }
    
   
    int* rows_sum = (int*)calloc(rows, sizeof(int));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            rows_sum[i] += array[i][j];
        }
    }

    
    printf("Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    

    printf("sum of the columns:\n");
    for (int j = 0; j < columns; j++) {
        printf("%d ", columns_sum[j]);
    }
    printf("\n");
    
    
    printf("sum of the rows:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rows_sum[i]);
    }
    printf("\n");
    
   
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    free(columns_sum);
    free(rows_sum);
    
    return 0;
}