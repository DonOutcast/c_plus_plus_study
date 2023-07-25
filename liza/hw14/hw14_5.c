#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows, *columns;
    int **array;
    printf("Number of rows: ");
    scanf("%d", &rows);
    columns = (int *)malloc(rows * sizeof(int));
    array = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++){
        printf("Number of items in a row %d: ", i + 1);
        scanf("%d", &columns[i]);
        array[i] = (int *)malloc(columns[i] * sizeof(int));
        printf("Line elements %d: ", i + 1);
        for (int j = 0; j < columns[i]; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    printf("Array: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns[i]; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);
    free(columns);

    return 0;
}
