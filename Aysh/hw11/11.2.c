#include <stdio.h>
float array(int a[10]) {
    float sum=0;
    float average=0;
    for(int i = 0;i < 10;i++) {
        sum+=a[i];
        }
    average=sum/10;
    return average;
    }
int main() {
    int a[10];
    for(int i = 0;i < 10;i++) {
       printf("a[%d]=",i);
       scanf("%d",&a[i]);
}
    printf("Average=%5.1f\n",array(a));
    return 0;
}