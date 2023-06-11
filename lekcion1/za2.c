
#include <stdio.h>

int main()
{
    double a = 30000+15000+9750+5*345;

    double b;
    b = a * 5 / 100;
    b = a - b;

    printf("%10.2f", b );
    
    return 0;
}