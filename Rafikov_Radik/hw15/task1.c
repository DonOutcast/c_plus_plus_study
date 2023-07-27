// Запросите ввод с клавиатуры количество элементов массива.
// Объявите целочисленный массив и выделите необходимый объем памяти для хранения элементов массива.
// Запросите ввод значений элементов массива с клавиатуры. Найдите среднее арифметическое чётных элементов массива и нечётных элементов массива.
// Если среднее арифметическое чётных элементов массива больше среднего арифметического нечётных элементов массива,
// то заменить значения всех нечётных элементов массива на ближайшее чётное число в большую сторону,
// иначе заменить все значения чётных элементов массива на ближайшее нечетное число в меньшую сторону.
// Если среднее арифметическое чётных элементов и нечётных элементов массива равны — заменить значения всех элементов массива на 0.
// Вывести элементы массив на экран в строку через пробел.

#include <stdio.h>
#include <stdlib.h>

float arithmetic_mean(int sum,int count){
    float result = sum/count;
    return result;
}

int main(){
    int size = 0;
    int sumeven = 0;
    int sumodd = 0;
    int countodd = 0;
    int counteven = 0;
    printf("Input size array: ");
    scanf("%d",&size);
    int *array = NULL;
    array = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Input array[%d]: ",i);
        scanf("%d",&array[i]);
        if (array[i] % 2 == 0){
            sumeven += array[i];
            counteven++;
        }else{
            sumodd += array[i];
            countodd++;
        }
    }
    //even четное odd нечетные
    float even = arithmetic_mean(sumeven,counteven);
    float odd = arithmetic_mean(sumodd,countodd);
    printf("Arithmetic mean: %f\n",even);
    printf("Arithmetic mean: %f\n",odd);
    if (even > odd){
        for (int i = 0; i < size; i++){
            if (array[i] % 2 != 0){
                array[i]++;
            }
        }
    }else if(odd > even){
        for (int i = 0; i < size; i++){
            if (array[i] % 2 == 0){
                array[i]--;
            }   
        }
    }else if(even = odd){
        for (int i = 0; i < size; i++){
            array[i] *= 0;
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    free(array);
    
    return 0;
}