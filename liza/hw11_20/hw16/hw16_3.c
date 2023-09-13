#include <stdio.h>
#include <stdlib.h>
int main(){
    int **array;
    int rows = 0;
    int columns = 0;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &columns);
    array = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++){
        array[i] = (int *)malloc(columns * sizeof(int));
        for(int j = 0; j < columns; j++){
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < rows; i++){
        int sum_of_the_row = 0;
        for (int j = 0; j < columns; j++){
            sum_of_the_row += array[i][j];
        }
        printf("Sum of the row %d: %d\n", i + 1, sum_of_the_row);
    }
    for (int j = 0; j < columns; j++){
        int sum_of_the_column = 0;
        for (int i = 0; i < rows; i++){
            sum_of_the_column += array[i][j];
        }
        printf("Sum of the column %d: %d\n", j + 1, sum_of_the_column);
    }
    for (int i = 0; i < rows; i++){
        free(array[i]);
    }
    free(array);
    return 0;
}