#include<stdio.h>
#include<locale.h>

int main()
{
   int count = 2;
   int sum;
   int namber1 = 0;
   int namber2 = 1;

   printf("%d\n", namber1 );
   printf("%d\n", namber2 );

   while(count <= 10)  {
     
     sum = namber1 + namber2;
     namber1 = namber2;
     namber2 = sum;
     count++;

     printf("%d\n", namber2 );
   }
  
    return 0;
}
 