#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a; // номер месяца
    
   
    wprintf (L"введите оценку:");
    scanf ("%d", &a);
    switch (a)
    {
        case 2: wprintf (L"плохо\n");break;
        case 3: wprintf (L"удовлетворительно\n");break;
        case 4: wprintf (L"хорошо\n");break;
        case 5: wprintf (L"отлично\n");break;
     
     default:  { printf ("error \n");}
   
return 0;
}
}