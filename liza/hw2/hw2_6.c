#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    printf("Количество очков: ");
    int a;
    scanf("%d", &a);
    if (a>=10)
    {
        printf("Ты победил!");
    }
    return 0;
}

