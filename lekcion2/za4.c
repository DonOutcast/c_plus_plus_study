#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

        int namber;
        printf("������� �����\n");
        scanf("%d", &namber);

        if (namber % 5 == 0 && namber %2 != 0 )
        {
            printf("����� ������������� �� 5");
        }
        else
        {
            printf("����� �� ������������� �� 5");
        }

    return 0;
}
