#include <stdio.h>

int main() {

    int array[3][3]={0};
    int sumd=0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i==j) {
            sumd+=array[i][j];
            }
        }
    }
    printf("sumd=%d\n", sumd);

    return 0;
}
