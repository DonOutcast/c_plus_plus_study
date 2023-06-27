#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int chislo;
    printf("¬ведите числол\n");
    scanf("%d",  &chislo);
    int soten = chislo / 100;
    chislo = chislo % 100;
    int desyatkov = chislo / 10;
    chislo = chislo % 10;
    int edinic = chislo;
    int summa = soten + desyatkov + edinic;
    printf("%d\n", summa);

    if (summa >= 10)
    {
        printf("сумма цифр %d \n",  summa);
    }
    else
        printf("сумма не двузначное число");

    return 0;
}

