// Напишите программу, которая запрашивает n-количество чисел, затем запрашивает ввод n-натуральных чисел.
// Программа должна вывести на экран в отдельных строках количество и сумму чётных введенных чисел, оканчивающихся на 4.
#include <stdio.h>
int main(){
    int qwentity_namber = 0,answer_namber = 0,sum_namber = 0,namber_of_namders = 0;
    scanf("%d",&qwentity_namber);
    for (int i = 0; i < qwentity_namber; i++)
    {
        scanf("%d",&answer_namber);
        if (answer_namber % 2 == 0 && answer_namber % 10 == 4)
        {
            namber_of_namders++;
            sum_namber += answer_namber;
        }
        
    }
    printf("namber of nambers: %d\n",namber_of_namders);
    printf("sum namber: %d\n",sum_namber);
    
    return 0;
}