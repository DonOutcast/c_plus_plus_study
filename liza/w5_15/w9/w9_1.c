#include <stdio.h>
int main() {
    int array[4][4];
    int i, j, sum = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            scanf("%d", &array[i][j]);
            printf("%2d", array[i][j]);
            sum += array[i][j];
        }
        printf("\n");
    }
    printf("%d\n", sum);
    return 0;
}