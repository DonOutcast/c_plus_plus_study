#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL, "Rus");
    int n=0;
    wprintf(L"Введите количество слонов:");
    scanf("%d",&n);
    for(int i = 1;i <=n;i++) {
        wprintf(L"%d слон\n",i);
    }
    return 0;
}