// Создайте массив из 20 элементов, заполните его следующими значениями: 0, 1, 8, 27, 64, 125… 
// Замените все элементы с чётными значениями на удвоенное значение элемента.
// Выведите на экран разность суммы первоначальных элементов и суммы элементов массива с учетом замен.
#include <stdio.h>
int main(){
    int array[20]={0,1,8,27,64,125};
    int realsum = 0;
    int answersum = 0;
    int answer = 0;
    for (int i = 0; i <= 20; i++)
    {
        realsum += array[i];
        if (array[i] % 2 == 0)
        {
            array[i] *= 2;
        }
        answersum += array[i];        
    }
    answer = answersum - realsum;
    printf("%d",answer);
    return 0;
}