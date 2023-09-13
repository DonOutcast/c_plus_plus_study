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
    int sum = 0;
    for (i = 0; i < row; i++){
        sum += array[i][i];
    }
    printf("the sum of the elements of the main diagonal: %d", sum);
    return 0;
}