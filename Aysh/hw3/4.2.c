#include <stdio.h>
int main ()
{
    int n,s=0;
    printf("Vvedite n:");
    scanf("%d",&n);

if(n>=0&&n<=1000)
{   s=n%100;
if (s==11||s==12||s==13||s==14) {
    printf("%d bochek\n",n); 
     }
     
     else {
      s=n%10;
      
    if(s==0||s==5||s==6||s==7||s==8||s==9) {
     printf("%d bochek\n",n);   
    }
      else
    {
    
    if(s==1) {
        printf("%d bochka\n",n);}
        else {
        printf("%d bochki\n",n);}
    }
       }
}

else 
{
    printf("Nuzno vvesti n ot 0 do 1000!\n");
    }
    return 0;
   
}