// Напишите программу, которая находит среднее арифметическое элементов  массива.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры (10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести значение среднего арифметического значения элементов в формате 5 знаков под всё число и 1 знака под дробную часть. 
// Поиск среднего арифметического оформите в виде функции, которая возвращает искомое значение, а в качестве параметра получает массив.
#include <stdio.h>

float average_value_array(int x[],int y){
    float sum = 0;
    for (int i = 0; i < y; i++)
    {
        sum += x[i];
    }
    sum = sum/10;

    return sum;
}

int main(){
    int size = 0;
    printf("Input size array?\n");
    scanf("%d",&size);
    int array[size - 1];
    for (int i = 0; i < size; i++)
    {
        printf("Input array[%d]:",i);
        scanf("%d",&array[i]);
    }

    printf("\nAverage value array: %5.1f",average_value_array(array,size));
    
    return 0;
}