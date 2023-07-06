
//Создайте двумерный массив и заполните его значениями. Выведите на экран значение 
//центрального элемента.
//1  2  3
//4  5  6
//7  8  9

#include <stdio.h>

int main() {

    int array[3][3] = {0};
    int center = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);    
        }
    }  
        printf("\n");
        center = array[1][1];
        printf("Result: %d\n", center);
 
    return 0;
}