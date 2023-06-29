// Напишите программу, которая запрашивает количество чисел и затем сами числа.
// Программа должна вывести на экран в отдельных строках сначала максимальное, а затем минимальное из введенных чисел.
#include <stdio.h>
int main(){
    int qwentity_namber = 0,answer_namber = 0,max_namber = 0,min_namber = 1000000;
    scanf("%d",&qwentity_namber);
    for (int i = 0; i < qwentity_namber; i++)
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