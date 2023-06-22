#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int coordinataX;
    int coordinataY;
    int coordinataX1;
    int coordinataY1;


    int circle = 0;

    printf(" введите координаты ладьи на поле 8 x 8 \n");

    while (circle + 1)
    { 
        printf( " Введите начальные координаты\n");
        scanf("%d", &coordinataX);
        scanf("%d", &coordinataY);
        if (coordinataX >= 9 || coordinataY >=9)
        {
            printf(" вы вышли за пределы координат\n ");
        }
        else 
        {
            printf(" Введите координаты перемещения\n");
            scanf("%d", &coordinataX1);
            scanf("%d", &coordinataY1);
            if ((coordinataX1 <= 8 && coordinataY1 <= 8) && (abs(coordinataX - coordinataX1) <=1 && abs(coordinataY - coordinataY1) <=1 || coordinataX == coordinataX1 || coordinataY == coordinataY1 ))
            {
                  if (coordinataX == coordinataX1 && coordinataY == coordinataY1)
                   {
                   printf(" нет\n ");
                   }
                  else
                  {
                    printf(" Да\n ");
                  }
            }
            else if(coordinataX1 > 8 || coordinataY1 > 8)
            {
                printf(" Вы вышли за пределы координат перемещения\n ");
            }
            else
            {
               printf("нет\n");
            }
        }
    }
    return 0;
}
