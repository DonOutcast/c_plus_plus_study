
#include <stdio.h>

int main()
{
    int a = 121;
    int b = 11;
    double c;

    c = a + b;
    printf("%10.1f\n", c);

    c = a - b;
    printf("%10.1f\n", c);

    c = a * b;
    printf("%10.1f\n", c);

    c = a / b;
    printf("%10.1f\n", c);

    return 0;
}