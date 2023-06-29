#include <stdio.h>
int main() {
int n=0;
int number=0;
int sumnumber=0;
int numbercount=0;
printf("Enter count:\n");
scanf("%d",&n);
printf("Enter numbers:\n");
for(int i= 1;i <= n; i++) { 
   scanf("%d",&number);
   if(number%10==4) {
       sumnumber+=number;
       numbercount++;
}
   
}
printf("Count=%d\n",numbercount);
printf("Sum=%d\n",sumnumber);

 return 0;
}