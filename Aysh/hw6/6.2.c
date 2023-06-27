#include <stdio.h>
int main() {

    int chislo=0;
    int sum=0;
    int sumch=0;
    
    do {
    printf("number?\n");
    scanf("%d",&chislo);
    sum+=chislo;
    if(chislo%2==0) {
        sumch+=chislo;
    }
        
    } 
    while(sumch<=50);
    
    printf("summa chisel:%d\n",sum);
    printf("summa chetnyx chisel:%d\n",sumch);
    
    return 0;
}