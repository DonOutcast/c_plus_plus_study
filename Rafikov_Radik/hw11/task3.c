// Напишите программу, которая вычисляет количество элементов массива, бо?льших, чем среднее арифметическое всех элементов массива.
// Программа должна запрашивать ввод значений элементов массива с клавиатуры (10 целочисленных элементов, каждый вводится в отдельной строке).
// Программа должна вывести количество элементов массива, бо?льших значения среднего арифметического всех элементов.
// Подсчет количества элементов оформите в виде функции, которая возвращает искомое количество, а в качестве параметра получает массив.
// Поиск среднего арифметического оформите в виде функции, которая возвращает искомое значение, а в качестве параметра получает массив.
#include <stdio.h>

float average_value_array(int x[],int y){
    float sum = 0;
    for (int i = 0; i < y; i++)
    {
        sum += x[i];
    }
    sum = sum/y;

    return sum;
}

int namber_average_value_array(int x[],int y,float z){
    int count = 0;
    for (int i = 0; i < y; i++)
    {
        if (x[i] > z)
        {
            count++;
        }
        
    }

   return count;
    
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

    printf("\nQuantity: %d",namber_average_value_array(array,size,average_value_array(array,size)));
    
    return 0;
}