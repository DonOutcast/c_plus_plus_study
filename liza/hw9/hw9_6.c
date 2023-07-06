#include <stdio.h>
int main() {
    int row, column;
    int sum1 = 0, sum = 0;
    int count1 = 0, count = 0;
    int quantity = 0;
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
            if (array[i][j] % 2 != 0){
                count1 += 1;
                sum1 += array[i][j];
            } 
        } 
    }
    for (i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            if (array[i][j] % 2 == 0 && array[i][j] > (sum1 / count1)){
                quantity++;
            }
        }
    }

    printf("The arithmetic mean of the odd elements of the array: %d\n", (sum1 / count1));
    printf("The number of even elements of the array is greater than the arithmetic mean of the odd elements of the array: %d\n", quantity);
    return 0;
}