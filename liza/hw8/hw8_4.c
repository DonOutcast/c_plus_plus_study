#include <stdio.h>
int main() {
    int a[10], sum = 0, average = 0;
    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    average = sum / 10;
    for (int i = 0; i < 10; i++){
        if (a[i] > average){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
