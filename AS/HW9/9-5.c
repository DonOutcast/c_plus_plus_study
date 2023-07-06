//Создайте двумерный массив и заполните его значениями. Выведите на экран количество 
//элементов массива больших чем среднее арифметическое значение всех элементов массива.

//1  2  3
//4  5  6
//7  8  9

#include <stdio.h>

int main() {

    int array[3][3] = {0};
    int sum = 0;
    int count = 0;
    int srznch = 0; //среднее арифметическое значение 
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);    
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += array[i][j];
        
    }
    }
srznch = sum/9;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] > srznch) {
                count++;
            }
        }
    }
        printf("\n");
        printf("Result: %d\n", count);
            

    
    return 0;
}
  
    
