// Напишите программу для вывода на экран двумерного массива. Программа запрашивает
//  количество строк, количество столбцов двумерного массива, затем запрашивает ввод 
//  самих элементов массива. Программа 
// должна вывести массив в виде таблицы с одним пробелом между элементами в строке.

#include <stdio.h>



int main() {
    int rows, columns;
    
    printf("number of rows: \n");
    scanf("%d", &rows);

    printf("number of columns: \n");
    scanf("%d", &columns);

    int array[rows][columns];
    printf("enter digits \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Table: \n");
    for (int i = 0; i < rows; i++) {
        for(int  j = 0; j < columns; j++)  {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }

    return 0;
}
