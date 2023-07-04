#include <stdio.h>


int main()
{
    printf("vvedite elementi 1 massiva\n");

    int a[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("vvedite elementi 2 massiva\n");
    int b[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }
    printf("tretiy massiv\n");
    int summa = 0;
    int c[5];
    for(int i = 0; i < 5; i++) {
        if(a[i] > b[i]) {
            c[i] = a[i];
            printf("%d ", c[i]);
        }
        else if(b[i] > a[i]) {
            c[i] = b[i];
            printf("%d ", c[i]);
        }
        else if(a[i] = b[i]) {
            c[i] = a[i];
            printf("%d ", c[i]);
        }
        summa += c[i];
    }
    
    printf("\n");
    printf("%d", summa);



    return 0;
}