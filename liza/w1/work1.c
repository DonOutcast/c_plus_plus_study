#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a;
    scanf("%d", &a);
    if (a>5){
        printf("a ������ 5");
    } else {
        printf("a ������ ��� ����� 5");
    }
}