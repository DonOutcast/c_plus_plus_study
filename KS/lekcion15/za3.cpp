#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float summa = 0;
    float sred = 0;
    float count = 0;

     float *arr = (float*)malloc(n * sizeof(int));
     for(int i = 0; i < i+1; i++)
     {
    
         scanf("%f", &arr[i]);
        if(arr[i] == 0)
        {    
           break;
        }
        summa += arr[i];
        count++;
     }
     printf("summa %0.0f\n", summa);
     sred = summa/count;
     printf("sred %.1f\n", sred);

      float *arr2 = (float*)malloc(count * sizeof(int));
       for(int i = 0; i < count; i++)
      {
        scanf("%f", &arr2[i]);
      }

      for(int i = 0; i < count; i++)
      {
        arr2[i] = arr2[i] - sred;
        printf("%.1f ", arr2[i]);
      }

    return 0;
}