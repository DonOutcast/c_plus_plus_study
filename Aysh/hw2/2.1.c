#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Rus");
    char c;
    wprintf(L"Уроки сделаны?");
    scanf("%c", &c);
    if (c=='y')  {
        wprintf(L"Молодец!\n"); }
      else  {
        printf("\n");}

        return 0;
    
}