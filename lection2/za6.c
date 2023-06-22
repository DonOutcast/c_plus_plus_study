#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber;
    printf("Введите число\n");
    

    for(int i = 0;i < i+1;i++)
    { 
        scanf("%d", &namber);

        if (namber >= 10)
        {
        printf("Ты победил");
          break;
        }
    }
    return 0;
}