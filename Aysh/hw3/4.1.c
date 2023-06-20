#include <stdio.h>
int main()
{
    int a,b,c=0;
    printf("Vvedite 3 chisla:");
    scanf("%d%d%d", &a, &b, &c);
    

    if (a%2==0&&b%2==1||a%2==1&&b%2==0)
    {
      printf("Yes\n");
    }
    
         else if (a%2==0&&c%2==1||a%2==1&&c%2==0) 
         {
            printf("Yes\n");
         }
         else if (b%2==0&&c%2==1||b%2==1&&c%2==0) 
         {
            printf("Yes\n");
         }
         else { 
            printf("No\n");
         }
    
    return 0;
}