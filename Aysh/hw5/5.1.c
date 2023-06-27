#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int c=0;
    wprintf(L"Кто является автором языка С++?\n1.Джеймс Гослинг\n2.Бьерн Страуструп\n3.Деннис Ритчи\n");
    scanf("%d",&c);
    switch(c) { 
    case 1 : wprintf(L"Ошибка\n");break;
    case 2 : wprintf(L"Верно\n");break;
    case 3 : wprintf(L"Ошибка\n");break;
    default : printf("Error\n");

    }
return 0;
}
