#include <stdio.h>


int main()
{
    int a[20] = {0, 1, 4, 8, 16, 25, 26, 29, 30, 25, 37, 39, 40, 45, 49, 50, 55, 59, 64, 69};

    for(int i = 0; i < 20; i++) {

        printf("%d ", a[i]);
    }
    return 0;
}