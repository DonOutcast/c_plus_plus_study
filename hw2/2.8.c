#include <stdio.h>
#include <locale.h>
int main() 

{
    setlocale(LC_ALL, "Rus");
    int x,y;//координаты точки
    wprintf(L"Введите координату x:");
    scanf("%d", &x);
    wprintf(L"Введите координату y:");
    scanf("%d", &y);
   
    if (x>0&&y>0) 
    {
     wprintf(L"Точка находится в первой четверти!\n"); 
    }
    else 

    if (x<0&&y>0) 
    {
      wprintf(L"Точка находится во второй четверти!\n"); 
    }
   else
        
 if (x<0&&y<0) 
    {
         wprintf(L"Точка находится в третьей четверти!\n"); 
    }
    else
    
        if (x>0&&y<0) 
        {
        wprintf(L"Точка находится в четвертой четверти!\n");
        }
       else 
       wprintf(L"Точка дежит на оси!\n");
       
    
    
         
    
       return 0;
    
}
