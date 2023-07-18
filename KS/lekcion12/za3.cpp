#include <stdio.h>

int func(int number)  {
    if(number == 1)  { 
        return 1;
    }
    else if( number == 2)  {
        return 2;
    }
    else if (number > 2) {
        return func(number - 2) * number;
    }
}

int main()
{
    int number;
    scanf("%d", &number);
    printf("%d", func(number));

    return 0;
}