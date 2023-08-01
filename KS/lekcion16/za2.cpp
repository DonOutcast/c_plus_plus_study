#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line;
    int column;
    int summ;
    printf("vvedite chislo strok\n");
    scanf("%d", &line);
    printf("Vvedite chisli stiolbikov\n");
    scanf("%d", &column);
    printf("Vvedite elementi\n");

      int **arr; 
      arr = (int**)malloc(line * sizeof(int*));
      // zapolnenie massiva
      for(int i = 0; i < line; i++)  {
        arr[i] = (int*)malloc(column * sizeof(int));
        for(int j = 0; j < column; j++)  {
           scanf("%d", &arr[i][j]);
        }
      }
      // vivod massiva
      printf("Massive\n");
      for(int i = 0; i < line; i++)  {
        for(int j = 0; j < column; j++)  {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
      }
      // summa stolbikov
      for(int j = 0; j < line; j++)  {
        summ = 0;
        for(int i = 0; i < column; i++)  {
           
              summ += arr[i][j];
        }
        printf("summa stolbik %d) %d\n", j + 1, summ);
      }
      // udalenie pamiati
      for(int i = 0; i < line; i++)  {
        free(arr[i]);
      }
      free(arr);
    
    return 0;
}