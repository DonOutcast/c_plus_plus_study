#include <stdio.h>
#include <locale.h>

double func(int a[10])
{
    int summ = 0;
    double sred = 0;
    for(int i = 0; i < 10; i++)
    {
        summ +=a[i];
    }
    sred = (double)summ / 10;
    return sred;
}

int main()
{
    int a[10];
    for( int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("sred %g", func(a));
    

    return 0;
}