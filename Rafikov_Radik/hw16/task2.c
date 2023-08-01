// Создание двумерного массива
// Напишите программу, которая запрашивает у пользователя количество строк и столбцов для двумерного массива.
// Выделите память для двумерного массива и заполните его случайными числами ,
// найдите самую большую сумму чисел. в столбце. Выведите содержимое массива на экран.
// После завершения работы с массивом, освободите выделенную память.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int **array = NULL;
    int column,row,summax,index = 0;
    int result = 0;
    printf("Input row: ");
    scanf("%d",&row);
    printf("Input column: ");
    scanf("%d",&column);
    array = (int**)malloc(row*sizeof(int));
    if(array == NULL){
        printf("Error");
    }else{
        for (int i = 0; i < row; i++){
            if (array[i] == NULL){
                printf("Error");
            }else{ 
                array[i] = (int*)malloc(column*sizeof(int));
                for (int j = 0; j < column; j++){
                    printf("Input array[%d][%d]: ",i,j);
                    scanf("%d",&array[i][j]);
                }
            }      
        } 
    }
    printf("\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\n");    
    for (int i = 0; i < column; i++){
        summax = 0;
        for (int j = 0; j < row; j++){
            summax += array[j][i];
        }
        if (summax > result){
            result = summax;
            index == i;
        }
    }
    printf("Max sum colomn: %d",result);

    for (int i = 0; i < row; i++){
        free(array[i]);
    }
    free(array);
   
    return 0;
}