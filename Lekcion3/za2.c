 
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber;
    int circle = 0;
    printf("Напишите число\n");

    while (circle + 1)
    {
        scanf("%d", &namber);

        if (namber % 5 == 0 && namber %2 != 0 )
        {
            printf("+\n");
        }
        else
        {
            printf("-\n");
        }
    }

    return 0;
}