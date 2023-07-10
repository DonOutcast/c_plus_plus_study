#include <stdio.h>
 int pw(int a,int n) {
     int st=1;
     for(int i = 0;i < n;i++) {
         st*=a;
        }
        return st;
}
int main() {
    int a=0;
    int n=0;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter n:");
    scanf("%d",&n);
    printf("st=%d\n",pw(a,n));
    return 0;
    }
   