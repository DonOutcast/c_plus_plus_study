#include <stdio.h>

int main() {

    int array[3][3]={0};
    float sum=0;
    float suma=0;
    int count=0;

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
         
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma=sum/9;
            if (array[i][j] > suma) {
                count++;
            }
          }
    }
     
    printf("Count=%d\n", count);

    return 0;
}
