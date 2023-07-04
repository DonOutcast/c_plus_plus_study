#include <stdio.h>
int main() {

int a[10];
int i=0;
float sum=0;
float suma=0;
int count=0;
for( i = 0;i < 10;i++) {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
    sum+=a[i];
      }
for( i = 0;i < 10;i++) {
   suma=sum/10;
   if(a[i]>suma) {
       count++;
    }
}
printf("sum=%f\n",sum);
printf("suma=%f\n",suma);
printf("count=%d\n",count);
return 0;
}