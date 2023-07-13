#include <stdio.h>

int func(int a[10]) {
    int summ = a[0];
    for(int i = 0; i < 10; i++)  {
        if(a[i] > summ) {
            summ = a[i];
        }
    }
    return summ;
}
int main() {
    int a[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("max %d", func(a));

    return 0;
}