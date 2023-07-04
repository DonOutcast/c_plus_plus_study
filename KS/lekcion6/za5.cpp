#include<stdio.h>
#include<locale.h>

int main()
{
   int namber1;
   int namber2;
   int namber3;

   scanf("%d", &namber1);
   scanf("%d", &namber2);

   while( namber1 != 0 && namber2 != 0) {

      if(namber1 > namber2)
         namber1 = namber1 % namber2;
     else 
       namber2 = namber2 % namber1;
   }
    
    namber3 = namber1 + namber2;
    printf("%d", namber3);
  
    return 0;
}