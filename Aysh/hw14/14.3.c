#include <stdio.h>
int main() {
    
    int rows=0;
    int columns=0;
    
    printf("Number of rows:");
    scanf("%d", &rows);
    printf("Number of columns:");
    scanf("%d", &columns);

    int array[rows][columns];
    printf("Fill array: \n");
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("a[%d][%d]=",i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Array table: \n");
    for (int i = 0; i < rows; i++) {
        for(int  j = 0; j < columns; j++)  {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }
    return 0;


}