//Создайте двумерный массив и заполните его значениями. Выведите на экран сумму 
//всех элементов.
//1  2  3
//4  5  6
//7  8  9

#include <stdio.h>

int main() {

    int array[3][3] = {0};
    int sum = 0;

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
        
        printf("\n");
        printf("Result: %d\n", sum);
  
    

    
    return 0;
}