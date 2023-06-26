#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    char a;

    printf("zhelaete bludo dnia?");
    scanf("%s", &a);
    if(a == 'y') {
        printf("zakaznoe bludo dnia");
    }
    else  {
        printf("zhelaete bissnes lunch?");
        scanf("%s", &a);
     //   scanf("%s", &a);
        if(a == 'y')  {
        printf("zakazan biznes lanch ");
        }
        else
        printf("osnovnoe bludo");
    }

    return 0;
}