#include <stdio.h>
#include <stdlib.h>
int main()  {
    int **array;
    int rows = 0;
    int columns = 0;
    int sumcolumns = 0;
    int sumrows = 0;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &columns);
    array = (int**)malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; i++)  {
        array[i] = (int*)malloc(columns * sizeof(int));
        for(int j = 0; j < columns; j++)  {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        } 
      }
      printf("Our array:\n");
      for(int i = 0; i < rows; i++)  {
        for(int j = 0; j < columns; j++)  {
           printf("%d ", array[i][j]);
           }
        printf("\n");
      }
            for(int i = 0; i < rows; i++)  {
                sumrows = 0;
                for(int j = 0; j < columns; j++)  {
                   sumrows+=array[i][j];
        }
        printf("Sum of the row %d : %d\n",i+1,sumrows);
            }
      for(int j = 0; j < columns; j++)  {
          sumcolumns = 0;
          for(int i = 0; i < columns; i++)  {
              sumcolumns+=array[i][j];
}
          printf("Sum of the column %d : %d\n",j+1,sumcolumns);
   }
for(int i = 0; i < rows; i++)  {
    free(array[i]);
      }
free(array);
return 0;
} 