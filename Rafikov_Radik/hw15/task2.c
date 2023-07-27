// ќбъ€вите целочисленный массив, количество элементов заранее не известно.
// ќрганизуйте ввод элементов массива, пока не будет введен 0.
// —оздайте массив действительных чисел с таким же количеством элементов,
// заполните его значени€ми Ч разность значени€ соответствующего элемента первого массива и среднего арифметического всех элементов первого массива.
// ¬ыведите на экран в строку элементы второго массива в формате 8 знакомест под всЄ число и 2 знакоместа под дробную часть.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array = NULL;
    int *array2 = NULL;
    int number = 1;
    int count = 1;
    int sum = 0;
    while (number != 0){
        array = (int*) realloc (array,count * sizeof(int));
        printf("Input namber:");
        scanf("%d",&array[0 + (count-1)]);
        number = array[0+(count-1)];
        sum += array[count-1];
        count++;
    }

    float result = sum/(count-1);
  
    array2 = (int*)malloc((count-1)*sizeof(int));
    for (int i = 0; i < (count-1); i++)
    {
        array2[i] = array[i] - result;
        printf("%8.2d",array2[i]);
    }
    

    
    
    
    return 0;
}