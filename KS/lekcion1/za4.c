#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a ;
    int b ;
    float c;

    printf( " Введите число а\n");
    scanf("%d", &a);

     printf( " Введите число b\n");
     scanf("%d", &b);

    c = a + b;
    printf("Сумма %10.0f\n", c);

    c = a - b;
    printf("Разность %10.0f\n", c);

    c = a * b;
    printf("Произведение %10.0f\n", c);

   c =  (float)a / b; 
   printf("Деление  %10.2f\n",  c);
    return 0;
}