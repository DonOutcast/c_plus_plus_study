#include <stdio.h>
#include <stdlib.h>
void array(int *aptr,int size) {
     for(int i = 0;i < size;i++) {
         *(aptr+i)*=2;
        }
}
int main() {

    int a[10];
    for(int i = 0;i < 10;i++) {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
}
    array(a,10);
    for(int i = 0;i < 10;i++) {
        printf("%d ",a[i]);
    }
printf("\n");
return 0;
}