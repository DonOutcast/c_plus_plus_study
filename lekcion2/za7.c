#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");

    int namber1;
    int namber2;
    int namber3;

    printf("¬ведите 1 сторону треугольника\n");
    scanf("%d", &namber1);
    printf("¬ведите 2 сторону треугольника\n");
    scanf("%d", &namber2);
    printf("¬ведите 3 сторону треугольника\n");
    scanf("%d", &namber3);

    if(namber1 == namber2 && namber1 == namber3)
    {
        printf("“реугольника не существует");
    }
    else if((namber1 == namber2 && namber3 > namber1) || (namber2 == namber3 && namber1 > namber2 ) || (namber1 == namber3 && namber2 > namber1 ) )
    {
        printf("треугольника не существует");
    }
    else
    {
        printf("“реугольник построен");
    }

    return 0;
}
