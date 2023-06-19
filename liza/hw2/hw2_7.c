#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a>0 && b>0 && c>0)
    {
        if (a<b+c && b<a+c && c<a+b)
        {
            printf("Треугольник существует.");
        }
    }
    return 0;
}
