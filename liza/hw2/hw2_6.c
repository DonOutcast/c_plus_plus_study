#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    printf("���������� �����: ");
    int a;
    scanf("%d", &a);
    if (a>=10)
    {
        printf("�� �������!");
    }
    return 0;
}

