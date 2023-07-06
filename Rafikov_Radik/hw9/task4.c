// Создайте двумерный массив и заполните его значениями. Выведите на экран сумму всех элементов главной диагонали.
// 1  2  3
// 4  5  6
// 7  8  9
#include <stdio.h>
int main(){
    int array[3][3];
    int sumarray = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("arrary [%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
            if (i == j){
                sumarray+=array[i][j];
            }
        }
        printf("\n");
    }
    printf("%d",sumarray);

    return 0;
}   