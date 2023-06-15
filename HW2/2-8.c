#include <locale.h>
#include <stdio.h>
#include <conio.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int x,y;
    wprintf (L"введите координату точки X:");
    scanf ("%d", &x);
    wprintf (L"введите координату точки y:");
    scanf ("%d", &y);
   
if ((x>0) && (y>0)){
    wprintf (L"точка находится в I четверти.");
}
else if ((x<0) && (y>0)){
    wprintf (L"точка находится в II четверти.");
}
else if ((x<0) && (y<0)){
    wprintf (L"точка находится в III четверти.");
}
else if (x>0&&y<0) 
        {
        wprintf(L"Точка находится в четвертой четверти!\n");
        }
else {
wprintf(L"Точка дежит на оси!\n");
}
 return 0;}

