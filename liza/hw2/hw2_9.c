#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a%b==0)
    {
        printf("%d делится на %d", a, b);
    }
    return 0;
}