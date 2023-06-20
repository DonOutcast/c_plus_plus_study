#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a;
    wprintf(L"Введите число:");
    scanf("%d", &a);
    if (a%2==0) 
    {
        wprintf(L"Число %d - четное\n",a); 
        
        }
      
       return 0;
    
}