#include <stdio.h>


int main()
{

    int a[3][3];
    int summa = 0;
    for(int i = 0; i < 3; i++)  {
        for(int j = 0; j < 3; j++)  {
            scanf("%d", &a[i][j]);
        }
    }
      for(int i = 0; i < 3; i++)  {
        for(int j = 0; j < 3; j++)  {
            printf("%3d", a[i][j]);
            summa += a[i][j];
        }
        printf("\n");
    }
    
    printf("\n");
    printf("%d summa ", summa);

    return 0;
}