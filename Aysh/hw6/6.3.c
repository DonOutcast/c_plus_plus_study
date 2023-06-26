#include <stdio.h>
int main() {

    int a=1;
    int b=1;
    int n=2;
    int sum=0;
    printf("%d\n%d\n",a,b);
    while(n<9) {
    sum=a+b;
    a=b;
    b=sum;
    n++;
    printf("%d\n",sum);
    }
   
    return 0;
}