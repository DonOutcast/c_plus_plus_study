#include <stdio.h>

int func(int b, int e)
{
    int res = 1;
    for(int i = 0; i < e; i++)  {
        res *= b;
    }
    return res;
}

int main()
{
    int b;
    int e;
    printf("vvedite chislo\n");
    scanf("%d", &b);
    printf("vvedite stepen\n");
    scanf("%d", &e);
    printf("Answer %2d", func(b,e));

    return 0;
}