#include <stdio.h>
int main() {
    int array[10][10];
    int i, j;
    for (i = 1; i < 10; i++){
        for (j = 1; j < 10; j++){
            array[i][j] = i * j;
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
