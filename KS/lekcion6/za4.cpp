#include<stdio.h>
#include<locale.h>

int main()
{
   int count = 1;
   int namber;
   
   printf("vvedite chislo\n");
   scanf("%d", &namber);

   while( count <= namber) {

    if(namber % count == 0)
    printf("%d\n", count);

     count++;
   }   
  
    return 0;
}