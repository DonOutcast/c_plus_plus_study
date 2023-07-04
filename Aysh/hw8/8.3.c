#include <stdio.h>
int main() {

int a[11];
for(int i = 0;i < 11;i++) {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
}
for(int i = 0;i < 11;i++) {
    printf("%d ",a[i]);
}
printf("\n");
for(int i = 10;i >= 0;i--) {
   
   printf("%d ",a[i]);
}

printf("\n");
return 0;
}