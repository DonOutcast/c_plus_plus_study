#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    int namber1 = 0;
    int namber2 = 0;
   double namber3;
  

    scanf("%d", &namber1);
    scanf("%d", &namber2);

    if (namber2 == 0)
    {
       printf( "на ноль делить нельз€\n");
    }
    else
         printf("ѕервое число делитс€ на второе\n");

   namber3 = (double)namber1 / namber2;
   
         printf("%10.2f", namber3) ;
    
    return 0;
}