#include <stdio.h>

int main()
{
    int a[3][3];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int summa = 0;
    int summa2 = 0;
    int sred1 = 0;
    int sred2 = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%3d", a[i][j]);

              if(a[i][j] % 2 == 0) {
                summa += a[i][j];
              }
               if(a[i][j] % 2 != 0) {
                summa2 += a[i][j];
              }
        }
        printf("\n");
    }
    printf("%d\n", summa);
    printf("%d\n", summa2);
    sred1 = summa / 9;
    printf("%d\n", sred1);
    sred2 = summa2 / 9;
    printf("%d\n", sred2);
    int count = 0;
    for(int i =0; i < 3; i++)  {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] > sred2) {
         
             count++;
            }
        }
        printf("\n");
    }
    
    printf("%d", count);

    return 0;
}