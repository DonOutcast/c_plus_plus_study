#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{

  int result;
 int count = 0;
   while(result != 0) {
     
     scanf("%d", &result);
     count += result;


   }
   printf("%d", count);
   

    return 0;
}