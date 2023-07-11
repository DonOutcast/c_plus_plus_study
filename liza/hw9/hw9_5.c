#include <stdio.h>
int main() {
    int row, column;
    int sum = 0;
    int count = 0;
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
            count += 1;
            sum += array[i][j];
        }
    }
    int average = 0;
    int quantity = 0;
    average = sum / count;
    printf("Arithmetic mean: %d\n", average);
    for (i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if (array[i][j] > average){
                quantity += 1;
            } 
        }
    }
    printf("The number of elements larger than the arithmetic mean: %d\n", quantity);

    return 0;
}
