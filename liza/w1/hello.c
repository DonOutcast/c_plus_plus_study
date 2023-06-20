#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int x, y, x1, y1;
    wprintf(L"Введите х у: ");
    scanf("%d %d", &x, &y);
    wprintf(L"Второю клетку х у: ");
    scanf("%d %d", &x1, &y1);
    if(abs(x1 - x) == 1 && abs(y1 - y) == 2){
        wprintf(L"Да\n");
    }else if(abs(x1 - x) == 2 && abs(y1 - y) == 1){
        wprintf(L"Да\n");
    }else{
        wprintf(L"Нет\n");
    }
    printf("Hello");
    return 0;
}
