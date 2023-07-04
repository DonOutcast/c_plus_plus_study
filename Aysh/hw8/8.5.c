#include <stdio.h>
int main() {
    int a[5]={0};
    int b[5]={0};
    int c[5]={0};
    int sum=0;
    int i=0;
    for(i = 0;i < 5;i++) {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
        for(i = 0;i < 5;i++) {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }

   for(i = 0;i < 5;i++) {
    if(a[i]>b[i]) {
        c[i]=a[i];
    }
    else  {
        c[i]=b[i];
    }
    printf("%d ",c[i]);
    sum+=c[i];
   }
   printf("\n");
   printf("sum=%d\n",sum);
   
return 0;
}