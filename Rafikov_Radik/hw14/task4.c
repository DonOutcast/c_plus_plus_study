// Напишите программу для вывода на экран двумерного массива. Программа запрашивает количество строк,
// количество столбцов двумерного массива, затем запрашивает ввод самих элементов массива.
// Программа должна вывести массив в виде таблицы с одним пробелом между элементами в строке.
#include <stdio.h>

int main(){
    int columns,row = 0;
    printf("Input columns: ");
    scanf("%d",&columns);
    printf("Input row: ");
    scanf("%d",&row);
    int array[columns-1][row-1];
    for (int i = 0; i < columns; i++){
        for (int j = 0; j < row; j++){
            printf("arrary [%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < columns; i++){
        for (int j = 0; j < row; j++){
            printf("%2d",array[i][j]);    
        } 
        printf("\n");
    }

    
    return 0;
}