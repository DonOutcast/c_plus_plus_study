#include <stdio.h>
#include <stdlib.h>

int main()
{
      int line = 0;
      int column = 0;
      int summ = 0;
      printf("vvedite chislo strok\n");
      scanf("%d", &line);
      printf("Vvedite chisli stiolbikov\n");
      scanf("%d", &column);
      printf("Vvedite elementi\n");

      int **arr; 
      arr = (int**)malloc(line * sizeof(int*));
      for(int i = 0; i < line; i++)  {
        arr[i] = (int*)malloc(column * sizeof(int));
        for(int j = 0; j < column; j++)  {
           scanf("%d", &arr[i][j]);
        }
      }
      printf("Massive\n");
      for(int i = 0; i < line; i++)  {
        for(int j = 0; j < column; j++)  {
           printf("%d ", arr[i][j]);
           if(i == j)  {
              summ += arr[i][j];
           }
        }
        printf("\n");
      }
      printf("summ %d\n", summ);
      printf("new massive\n");
      for(int i = 0; i < line; i++)  {
        for(int j = 0; j < column; j++)  {
          if(i == j) {
            if(summ > 10)  {
              arr[i][j] = 10;
            }
            else  {
              arr[i][j] = 5;
            }              
          }
          printf("%d ", arr[i][j]);
        }
        printf("\n");
      }

      for(int i = 0; i < line; i++)  {
        free(arr[i]);
      }
      free(arr);

    return 0;
}