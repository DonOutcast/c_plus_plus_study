#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    float a;
    wprintf(L"Введите число:");
    scanf("%f", &a);
    if (a<0)  {
        wprintf(L"Число %f отрицательное\n",a); }
      
       return 0;
    
}