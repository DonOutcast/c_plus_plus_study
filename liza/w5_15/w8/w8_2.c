#include <stdio.h>
int main() {
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sum, i;
    for (i = 0; i < 10; i++){
        if (i % 2 != 0){
            sum += a[i];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}