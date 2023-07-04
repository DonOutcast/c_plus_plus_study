#include <stdio.h>
int main() {

int a[20]={0,1,8,27,64,125};
int sum=0;
int sumdoubled=0;
for(int i = 0;i < 20;i++) {
    sum+=a[i];
}
   for(int i = 0;i < 20;i++) {
    if(a[i]%2==0) {
        a[i]=2*a[i];
    }
    sumdoubled+=a[i];
    }

printf("%d\n",sum-sumdoubled);
return 0;

}