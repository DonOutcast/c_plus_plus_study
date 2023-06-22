#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

        int namber;
        printf("Введите число\n");
        scanf("%d", &namber);

        if (namber % 5 == 0 && namber %2 != 0 )
        {
            printf("Число заканчивается на 5");
        }
        else
        {
            printf("Число не заканчивается на 5");
        }

    return 0;
}
