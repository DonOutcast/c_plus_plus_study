#include <stdio.h>
int main() {
    int n=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=2;i <= n; i++) {
        if(i%2!=0||i==2) {
            printf("%d\n",i);
        }
        
    }
return 0;
}