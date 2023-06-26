#include<stdio.h>
#include<locale.h>

int main()
{
   int namber;
   int count = 0;

   printf("vvedite chislo\n");
   scanf("%d", &namber);

   while(count < namber) {
    count++;
    printf( "programming\n");
   }

    return 0;
}