#include <stdio.h>
int main(){
    int rows, columns;
    printf("Number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    int array[rows][columns];
    printf("Array elements: ");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("Array: \n");
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }
    return 0;


}