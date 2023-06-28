#include <stdio.h>
int main() {

int n=0;
int max;
int min;
int number=0;
printf("Enter count:\n");
scanf("%d",&n);
printf("Enter numbers:\n");
for(int i= 1;i <= n; i++) { 
   scanf("%d",&number);
   if (number>max) {
      max=number; 
    }
    else if (number<min) {
        min=number;

    }

   }
printf("max=%d\n",max);
printf("min=%d\n",min);

   return 0;
   
}


