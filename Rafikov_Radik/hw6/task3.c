// »спользу€ цикл while, напишите программу, 
// котора€ выводит на экран в столбик р€д ‘ибоначчи до 10-го члена р€да.
// „исла ‘ибоначчи Ч это элементы числовой последовательности,
// в которой первые два числа равны 1 и 1, а каждое последующее число равно сумме двух предыдущих чисел.
#include <stdio.h>
int main(){
    int namber1 = 1;
    int namber2 = 1;
    int namber3 = 0;
    int answer = 0;
    printf("%d\n%d\n",namber1,namber2);
    while (answer < 8)
    {
        namber3 = namber1 + namber2;
        printf("%d\n",namber3);
        namber1 = namber2;
        namber2 = namber3;
        answer++;

    }
    

    return 0;
}