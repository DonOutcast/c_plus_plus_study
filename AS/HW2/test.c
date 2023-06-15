#include <locale.h>
#include <stdio.h>


int main() {
setlocale(LC_ALL, "Rus");

int a,b,c;


  
wprintf (L"введите число А:");
scanf ("%d", &a);
while (a<=9){;
c=1+a;
wprintf("%d",c); };
  return 0;
}
