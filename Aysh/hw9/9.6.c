#include <stdio.h>

int main() {

    int array[3][3]={0};
    float sumodd=0;
    float sumodda=0;
    int countodd=0;
    int counteven=0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j]%2!=0) {
                sumodd+=array[i][j];
                countodd++;
          }
       }
    }
         
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sumodda=sumodd/countodd;
            if (array[i][j] %2==0&&array[i][j] > sumodda) {
                counteven++;
            }
          }
    }
     
    printf("Counteven=%d\n", counteven);

    return 0;
}
