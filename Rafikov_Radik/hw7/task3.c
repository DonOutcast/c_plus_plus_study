// Напишите программу, которая считает слонов. 
// Программа должна запросит ввод n-количество слонов, затем вывести на экран в столбик:
// 1 слон
// 2 слон
// 3 слон
// …
// n слон
#include <stdio.h>
int main(){
    int input_namber = 0;
    scanf("%d",&input_namber);
    for (int i = 1; i <= input_namber; i++)
    {
        printf("%d elephant\n",i);
    }
    

    return 0;
}