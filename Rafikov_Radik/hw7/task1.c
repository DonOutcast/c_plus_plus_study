// Напишите программу, которая запрашивает количество чисел и затем сами числа.
// Программа должна вывести на экран в отдельных строках сначала максимальное, а затем минимальное из введенных чисел.
#include <stdio.h>
int main(){
    int qwentity_namber = 0,answer_namber = 0,max_namber = 0,min_namber = 0;
    scanf("%d",&qwentity_namber);
    scanf("%d",&answer_namber);
    max_namber = min_namber = answer_namber;
    for (int i = 0; i < qwentity_namber - 1; i++)
    {
        scanf("%d",&answer_namber);
        if (max_namber < answer_namber)
        {
            max_namber = answer_namber;
        }
        if (min_namber > answer_namber)
        {
            min_namber = answer_namber;
        }
    }
    printf("max. namber: %d\n",max_namber);
    printf("min. namber: %d\n",min_namber);
    

    return 0;
}