#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    while (5)
    {
        printf("������!");
        scanf("%d", &a);
        
    }
    
    return 0;
}