#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a;
    wprintf(L"Введите количество очков:");
    scanf("%d", &a);
    if (a>=10) 
    {
        wprintf(L"Ты победил!\n"); 
        
        }
      
       return 0;
    
}