// Создание двумерного массива
// Напишите программу, которая запрашивает у пользователя количество строк и столбцов для двумерного массива.
// Выделите память для двумерного массива и заполните его случайными числами .
// После заполнения – посчитать сумму элементов отдельно в каждом столбце и каждой строке.
// После завершения работы с массивом, освободите выделенную память.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int **array = NULL;
    int row = 0,column = 0,sumrow = 0,sumcolumn = 0;
    printf("input row: ");
    scanf("%d",&row);
    printf("Input column: ");
    scanf("%d",&column);
    array = (int**)malloc(row * sizeof(int));
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
    for (int i = 0; i < row; i++){
        sumrow = 0;
        for (int j = 0; j < column; j++){
            sumrow += array[i][j];     
        }
        printf("Sum row %d: %d\n",i+1,sumrow);    
    }
    printf("\n");
    for (int i = 0; i < column; i++){
        sumcolumn = 0;
        for (int j = 0; j < row; j++){
            sumcolumn += array[j][i];     
        }
        printf("Sum column %d: %d\n",i+1,sumcolumn);    
    }
    
    for (int i = 0; i < row; i++){
        free(array[i]);
    }
    free(array);
    return 0;
}