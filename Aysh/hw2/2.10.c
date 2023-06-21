#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    int a,b;
    wprintf(L"Введите трехзначное число:");
    scanf("%d", &a);
    b=0;
   
 while (a > 0)  
   {
        b=b+a%10;
        a=a/10;
    }
    if(b>9&&b<100)
    {
        wprintf(L"Сумма цифр равна %d\n",b); 
        
    }
     
        return 0;
    
}