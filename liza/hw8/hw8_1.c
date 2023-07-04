#include <stdio.h>
#include <math.h>
int main() {
    int a[20], i, number;
    for (i = 0; i < 20; i++){
        number = pow(i, 2);
        printf("%d ", number);
    }
    return 0;
}
