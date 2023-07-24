#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n;
   int m;
   printf("vvedite kolichestvo strik\n");
   scanf("%d", &n);
   printf("vvedite kolichestvo stolbcov\n");
   scanf("%d", &m);
   printf("vvedite elementi\n");
   int **arr = (int**)malloc(n * sizeof(int*));

   for(int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(m * sizeof(int));
        for(int j = 0; j < m; j++ )  {
           scanf("%d", &arr[i][j]);
        }
   }
   for(int i = 0; i < n; i++ ) {
        for(int j = 0; j < m; j++ )  {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
   }
   for(int i = 0; i < n; i++) {
     free( arr[i]);
   }
   free( arr); 



    return 0;
}