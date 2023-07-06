#include <stdio.h>
int main() {
    int row, column;
    scanf("%d", &row);
    scanf("%d", &column);
    int array[row][column];
    int i, j;
    for (i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%2d", array[i][j]);
        }
        printf("\n");
    }
    int central_row = row / 2;
    int central_column = column / 2;
    int central_element = array[central_row][central_column];
    printf("Centtral element: %d", central_element);

    return 0;
}