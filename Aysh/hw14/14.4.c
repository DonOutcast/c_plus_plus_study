#include <stdio.h>
int main() {
    int rows=0;
    int array[20][20];
    int columns[20];
    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        printf("Count of numbers in row  %d is:",i+1);
        scanf("%d", &columns[i]);

        printf("Fill array: ");
        for (int j = 0; j < columns[i]; j++) {
            printf("a[%d][%d]=",i,j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Array table: \n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns[i]; j++) {
            printf("%d ", *(*(array + i) + j));
        }
        printf("\n");
    }
    return 0;
}

    
