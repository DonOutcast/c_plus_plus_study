#include <stdio.h>
#include <stdlib.h>

void simple(int *a, int size) {
     int *ptr = a;
     for(int i = 0; i < size; i++) {
          *(ptr + i) *= 2;
     }
}
int main() {
    int size = 10;
    int a[size];
   
    for(int i = 0; i < size; i++ ) {
        scanf("%d", &a[i]);
    }
    printf("\n");

    simple(a, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}