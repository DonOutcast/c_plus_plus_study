#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a;
    scanf("%d", &a);
    if (a%5==0 && a%2 != 0)
    {
        printf("+");
    }
    else{
        printf("-");
    }
    return 0;
}