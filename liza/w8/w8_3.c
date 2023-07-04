#include <stdio.h>
int main() {
    int a[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int count, i;
    for (i = 0; i < 10; i++){
        if (i % 3 == 0 && i != 0){
            count++;
        }
    }
    printf("Count: %d\n", count);
    return 0;
}