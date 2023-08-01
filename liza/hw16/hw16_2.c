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
    int max_columns_sum = 0;
    for (int j = 0; j < columns; j++){
        int sum = 0;
        for (int i = 0; i < rows; i++){
            sum += array[i][j];
        }
        if (sum > max_columns_sum){
            max_columns_sum = sum;
        }
    }
    printf("Max columns sum: %d\n", max_columns_sum);
    for (int i = 0; i < rows; i++){
        free(array[i]);
    }
    free(array);
    return 0;
}
