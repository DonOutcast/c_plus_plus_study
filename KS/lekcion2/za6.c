#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber;
    printf("������� �����\n");
    

    for(int i = 0;i < i+1;i++)
    { 
        scanf("%d", &namber);

        if (namber >= 10)
        {
        printf("�� �������");
          break;
        }
    }
    return 0;
}