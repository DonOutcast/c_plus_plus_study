#include <stdio.h>

int main() {

    int array[3][3]={0};
    int sum=0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum+=array[i][j];
        }
    }
    printf("sum=%d\n", sum);

    return 0;
}
