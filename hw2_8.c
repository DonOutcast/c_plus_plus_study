#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x>0 && y>0)
    {
        printf("I ��������.");
    }
    if (x<0 && y>0)
    {
        printf("II ��������.");
    }
    if (x<0 && y<0)
    {
        printf("III ��������.");
    }
    if (x>0 && y<0)
    {
        printf("IV ��������.");
    }
    return 0;
}