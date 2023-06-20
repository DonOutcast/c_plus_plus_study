#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a;
    wprintf(L"Введите число:");
    scanf("%d", &a);
    if (a%10==5) 
    {
        wprintf(L"Число %d - заканчивается на 5\n",a); 
        
        }
      
       return 0;
    
}