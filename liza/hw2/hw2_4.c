#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a;
    scanf("%d", &a);
    if (a%5==0 && a%2 != 0)
    {
        printf("����� <%d> - ������������� �� 5", a);
    }
    return 0;
}