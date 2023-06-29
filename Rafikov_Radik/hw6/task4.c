// Напишите программу, которая выводит на экран в столбик все делители введенного числа.
#include <stdio.h>
int main(){
    int entered_namber = 0;
    int namber = 1;
    scanf("%d",&entered_namber);
    while (namber <= entered_namber)
    {
        
        if (entered_namber % namber == 0)
        {
            printf("%d\n",namber);
        }
        namber++;
        
    }
    
    return 0;
}