#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int x;
    int y;
    

    printf("Введите координаты точки x и y \n");
    

    for (int i = 0; i < i + 1; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        

          if(x >= 0 && y > 0)
        {
            printf("1 четверть координат\n");
        }
        if( x <= 0 && y >0 )
        {
            printf("2 четверть координат\n");
        } 
        if (x < 0 && y <= 0)
        {
            printf("3 четверть координат\n");
        }
        if (x > 0 && y <= 0)
        {
            printf("4 четверть координат\n");
        }
     
        printf("Введите координаты точки\n");
    }
    

    return 0;
}