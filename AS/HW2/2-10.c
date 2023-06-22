#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");


int i,n,s;
do
{
  
wprintf (L"введите трехзначное число:");
    scanf ("%d", &n);
}while(n<=99 || n>=1000);
for(s=0; n; n/=10)
  s+=n%10;

 if ("%s\n",s>9 && s<100)

   {printf (""); }


else {wprintf (L"Сумма цифр ");
   printf("%d",s);
   };
    return 0;

}