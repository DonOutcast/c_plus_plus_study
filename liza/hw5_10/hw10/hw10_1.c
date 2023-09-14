#include <stdio.h>
#include <math.h>
int main() {
    int a, n;
    printf("a: ");
    scanf("%d", &a);
    printf("n: ");
    scanf("%d", &n);
    printf("%f\n", pow(a, n));
    return 0;
}