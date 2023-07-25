// Напишите программу для вывода на экран двумерного массива с различным количеством 
// элементов в строках. Программа запрашивает количество строк, затем для каждой строки
//  количество элементов, затем сами элементы. Программа должна 
// вывести массив в виде таблицы с расстоянием между элементами в строке в один пробел.

#include <stdio.h>


void printArray(int array[30][30], int rows, int columns[30]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns[i]; j++) {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("number of rows: \n");
    scanf("%d", &rows);

    int array[30][30];
    int columns[30];

    for (int i = 0; i < rows; i++) {
        printf("number of columns \n%d: ", i + 1);
        scanf("%d", &columns[i]);

        printf("elements \n%d: ", i + 1);
        for (int j = 0; j < columns[i]; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("table:\n");
    printArray(array, rows, columns);

    return 0;
}