#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int answer;
    printf("2+2=?\n");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("Верно!\n");
    }
    else
    {
        printf("Ошибка!\n");
    }
    return 0;
}