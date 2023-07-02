#include <stdio.h>


int main()
{
    int a[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 11; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int j = 10; 0 <= j; j--) {
        printf("%d ", a[j]);
    }
    
    return 0;
}