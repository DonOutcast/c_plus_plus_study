#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int x;
    int y;
    

    printf("������� ���������� ����� x � y \n");
    

    for (int i = 0; i < i + 1; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        

          if(x >= 0 && y > 0)
        {
            printf("1 �������� ���������\n");
        }
        if( x <= 0 && y >0 )
        {
            printf("2 �������� ���������\n");
        } 
        if (x < 0 && y <= 0)
        {
            printf("3 �������� ���������\n");
        }
        if (x > 0 && y <= 0)
        {
            printf("4 �������� ���������\n");
        }
     
        printf("������� ���������� �����\n");
    }
    

    return 0;
}