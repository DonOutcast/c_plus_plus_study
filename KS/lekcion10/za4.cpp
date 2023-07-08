#include <stdio.h>
#include <locale.h>
bool func(int n)
{
    if(n > 1)  {
        for(int i = 2; i < n; i++)  {
            if( n % i == 0)  {
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    } 
}

int main()
{
    int n;
    printf("Vvedite chislo\n");

    scanf("%d", &n);

    if(func(n))
    printf("+");
    else
    printf("-");


    return 0;
}