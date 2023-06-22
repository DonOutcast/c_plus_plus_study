#include <stdio.h>
#include <locale.h>
int main()

{
 setlocale(LC_ALL, "Rus");
 int a;
 printf("2+2=?");
 scanf("%d",&a);
 if(a==4)
 {
    wprintf(L"Верно\n");

 
 }
else
wprintf(L"Ошибка\n");

return 0;
}