// Напишите программу для вывода на экран двумерного массива с различным количеством элементов в строках.
// Программа запрашивает количество строк, затем для каждой строки количество элементов, затем сами элементы.
// Программа должна вывести массив в виде таблицы с расстоянием между элементами в строке в один пробел.
#include <stdio.h>

int main(){
    int row = 0;
    printf("input row:");
    scanf("%d",&row);
    int array[row];
    for (int i = 0; i < row; i++)
    {   
        int columns = 0;
        printf("input columns:");
        scanf("%d",&columns);
        array[columns];

        for (int j = 0; j < columns; j++)
        {
            scanf("%d",array[i]);
        }
        
    }
    
    return 0;
}