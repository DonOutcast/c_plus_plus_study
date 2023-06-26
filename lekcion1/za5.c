#include <locale.h>
#include <stdio.h>


int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
   
    float c;
    printf(" ¬ведите стоимость покупки\n");
    scanf("%d", &a);
    c = (float)a * 5 / 100;
    c = a - c;
    
    printf("Cтоимость покупки с учетом скидки%10.2f\n" , c);

    return 0;
}