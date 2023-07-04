// Создайте массив из 10 элементов, организуйте ввод элементов массива с клавиатуры, выведите на экран количество элементов, 
// бо?льших среднего арифметического значения всех элементов массива.
#include <stdio.h>
int main(){
    int array[9];
    int sumarray = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
        sumarray+=array[i];
    }

    int answer = 0;
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > sumarray / 10)
        {
            answer++;
        }
        
    }
    printf("answer: %d",answer);
    
    

    return 0;
}