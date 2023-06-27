#include <stdio.h>
#include <stdlib.h>
int main() {

    int a=0;
    int b=0;
    printf("Vvedite 1 chislo:\n");
    scanf("%d",&a);
    printf("Vvedite 2 chislo:\n");
    scanf("%d",&b);
    
    
    while (a!=0&&b!=0) {
      
      if (abs (a)>abs (b)) {
        a=a%b;
        }
      else  {
        b=b%a;
      }
      
          }
          printf("Max:%d\n",abs(a+b));
    
      return 0;
    }

