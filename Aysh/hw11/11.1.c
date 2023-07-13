#include <stdio.h>
int array(int a[10]) {
    int max=a[0];
    for(int i = 0;i < 10;i++) {
        if(a[i] > max) {
            max=a[i];
        }
    }
    return max;
}
int main() {
    int a[10];
    for(int i = 0;i < 10;i++) {
       printf("a[%d]=",i);
       scanf("%d",&a[i]);
}
    printf("Max=%d\n",array(a));
    return 0;
}