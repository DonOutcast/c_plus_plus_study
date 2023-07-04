#include <stdio.h>

int main()
{
    int a[20] = {0, 1, 4, 8, 16, 25, 26, 29, 30, 25, 37, 39, 40, 45, 49, 50, 55, 59, 64, 69};

    int summa1 = 0;
    int summa2 = 0;

    for(int i = 0; i < 20; i++) {
        printf("%d ", a[i]);
        summa1 += a[i];
    }
    printf("\n");
    printf("%d summa pervovo massiva\n", summa1);
    for(int j = 0; j < 20; j++) {
        if(j % 2 != 0) {
            a[j] *=2;
        }
        printf("%d ", a[j]);
        summa2 += a[j];
    }
    printf("\n");
    printf("%d summa vtorovo massiva\n", summa2);
    printf("%d raznost summ\n", summa2 - summa1);

    return 0;
}