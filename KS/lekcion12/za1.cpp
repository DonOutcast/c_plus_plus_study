#include<stdio.h>


int func2(int);
int func(int number)  {
    if(number == 1) {
        return 1;
    }
    else {
        if(number > 1)  {
            return 2 * func2(number - 1) + 5 * number;
        }
    } 
}
int func2( int number)  {
    if(number == 1) {
        return 1;
    }
    else   {
        if(number > 1)  {
            return func(number - 1) + 2 * number;
        }
    }
}   

int main()
{
    int number;
    int number2;
    scanf("%d", &number);
    scanf("%d", &number2);
    printf("%d\n", func(number));
    printf("%d\n", func2(number2));
    printf("%d", func(number) + func2(number2));

    return 0;
}