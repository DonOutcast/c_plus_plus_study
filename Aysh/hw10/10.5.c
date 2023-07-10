#include <stdio.h>
int array(int a[10]) {
    int min=a[0];
    for(int i = 0;i < 10;i++) {
        if(a[i] < min) {
            min=a[i];
        }
    }
    return min;
}
int main() {
    int a[10];
    for(int i = 0;i < 10;i++) {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
   printf("Min=%d\n",array(a));
   return 0;
}