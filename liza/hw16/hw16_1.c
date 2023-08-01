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
    int sum_of_the_main_diagonal = 0;
    for(int i = 0; i < rows; i++){
        sum_of_the_main_diagonal += array[i][i];
    }
    for (int i = 0; i < rows; i++){
        if (sum_of_the_main_diagonal > 10){
            array[i][i] = 10;
        } else {
            array[i][i] = 5;
        }
    }
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++){
        free(array[i]);
    }
    free(array);
    return 0;
}