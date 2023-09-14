#include <stdio.h>
int main() {
    int a[5], b[5], c[5], i, sum = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++){
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++){
        if (a[i] > b[i]){
            c[i] = a[i];
        } else {
            c[i] = b[i];
        }
        printf("%d ", c[i]);
        sum += c[i];
    }
    printf ("\n");
    printf("%d\n", sum);
    return 0;
}


