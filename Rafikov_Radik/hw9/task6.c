// Создайте двумерный массив и заполните его значениями.
// Выведите на экран количество чётных элементов массива больших чем среднее арифметическое значение нечётных элементов массива.
// 1  2  3
// 4  5  6
// 7  8  9
#include <stdio.h>
int main(){
    int array[3][3];
    int sumarray = 0;
    int count = 0,count1 = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("arrary [%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
            if (array[i][j] % 2 != 0){
                sumarray+=array[i][j];
                count++;
            }
            
        }
        printf("\n");
    }
    printf("%d\n",sumarray);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] % 2 == 0 && sumarray/count > array[i][j]){
                count1++;
            }       
        }
    }
    printf("%d",count1);
    return 0;
}   
