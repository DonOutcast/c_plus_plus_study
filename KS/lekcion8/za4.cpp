#include <stdio.h>


int main()
{
    int a[10];
    int summa = 0;
    int sred = 0;
    for(int i = 0; i < 10; i++)  {
        scanf("%d", &a[i]);
        summa += a[i];
    }
    printf("\n");
    printf("%d summa \n", summa);
    sred = summa/10;
    printf("%d srednee \n", sred);
    printf("elementi bolshe srednevo\n");
    for(int i = 0; i < 10; i++) {
        if(sred < a[i]) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}