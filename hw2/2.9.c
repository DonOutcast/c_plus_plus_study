#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a,b;
    wprintf(L"Введите первое число:");
    scanf("%d", &a);
    wprintf(L"Введите второе число:");
    scanf("%d", &b);

    if (a%b==0) 
    {
        wprintf(L"%d делится на %d\n",a,b); 
        
        }
        return 0;
    
}