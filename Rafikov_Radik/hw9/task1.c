// Создайте и выведите на экран в виде таблицы двумерный массив (2 знакоместа под один элемент).
// 1  2  3
// 4  5  6
// 7  8  9
#include <stdio.h>
int main(){
    int array[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("arrary [%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");   
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%2d",array[i][j]);    
        }
        printf("\n");     
    }

    return 0;
}