#include <stdio.h>
int main() {
    int row, column;
    int sum = 0;
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
            sum += array[i][j];
        }
        printf("\n");
    }
    printf("Sum of all elements: %d", sum);

    return 0;
}