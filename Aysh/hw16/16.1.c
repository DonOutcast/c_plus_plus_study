#include <stdio.h>
#include <stdlib.h>
int main()  {
    int **array;
    int rows = 0;
    int columns = 0;
    int sumdiagonal = 0;
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
           if(i == j)  {
              sumdiagonal+= array[i][j];
           }
        }
        printf("\n");
      }
      
      printf("New array:\n");
      for(int i = 0; i < rows; i++)  {
        for(int j = 0; j < columns; j++)  {
           
            if(sumdiagonal > 10)  {
              array[i][i] = 10;
            }
            else  {
              array[i][i] = 5;
            }              
          
          printf("%d ", array[i][j]);
        }
        printf("\n");
      }

      for(int i = 0; i < rows; i++)  {
        free(array[i]);
      }
      free(array);

    return 0;
}