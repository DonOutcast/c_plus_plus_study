#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");

    int coordinataX;
    int coordinataY;
    int coordinataX1;
    int coordinataY1;


    int circle = 0;

    printf(" ������� ���������� ����� �� ���� 8 x 8 \n");

    while (circle + 1)
    { 
        printf( " ������� ��������� ����������\n");
        scanf("%d", &coordinataX);
        scanf("%d", &coordinataY);
        if (coordinataX >= 9 || coordinataY >=9)
        {
            printf(" �� ����� �� ������� ���������\n ");
        }
        else 
        {
            printf(" ������� ���������� �����������\n");
            scanf("%d", &coordinataX1);
            scanf("%d", &coordinataY1);
            if ((coordinataX1 <= 8 && coordinataY1 <= 8) && (coordinataX1 - coordinataX== 1 || coordinataY1 - coordinataY == 1 || -(coordinataX1 - coordinataX ) == 1 || - (coordinataY1 - coordinataY == 1)))
            {
                  if (coordinataX == coordinataX1 && coordinataY == coordinataY1)
                   {
                   printf(" ���\n ");
                   }
                  else
                  {
                    printf(" ��\n ");
                  }
            }
            else if(coordinataX1 > 8 || coordinataY1 > 8)
            {
                printf(" �� ����� �� ������� ��������� �����������\n ");
            }
            else
            {
               printf("���\n");
            }
        }
    }
    return 0;
}
