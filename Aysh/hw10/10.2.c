#include <stdio.h>
void arrayf(int a[],int b[],int c[]) {
    for(int i = 0;i < 10;i++) {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }   
    for(int i = 0;i < 10;i++) {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
       for(int i = 0;i < 10;i++) {   
          if(a[i]>b[i]) {
            c[i]=a[i];
        }
          else {
            c[i]=b[i];
        }
        printf("%d ", c[i]);
    }
          }
    
int main() {
    int a[10];
    int b[10];
    int c[10];
    arrayf(a,b,c);
    printf("\n");
    return 0;
}
