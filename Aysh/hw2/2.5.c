#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a;
    wprintf(L"Введите натуральное число:");
    scanf("%d", &a);
    if (a>0&&a%2==0) 
    {
        wprintf(L"Число %d-подходит\n",a); 
        
        }
      
       return 0;
    
}