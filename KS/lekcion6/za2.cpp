#include<stdio.h>
#include<locale.h>

int main()
{
   int namber =0;
   int temp = 0;
   int count = 0;
    printf("vvedite chislo\n");
   while(count <= 50) {

    scanf("%d", &namber);
    
    if(namber%2 == 0)  {
       count += namber;
     } 
    temp += namber;
   }
   printf("%d\n", temp);
   printf("%d\n", count);

    return 0;
}