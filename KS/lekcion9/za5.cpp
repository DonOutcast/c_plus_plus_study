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
    int sred = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%3d", a[i][j]);

              summa += a[i][j];
            
        }
        printf("\n");
    }
    sred = summa/9;
    int count = 0;
    for(int i =0; i < 3; i++)  {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] > sred) {
         
             count++;
            }
        }
        printf("\n");
    }
    
    printf("%d", count);

    return 0;
}