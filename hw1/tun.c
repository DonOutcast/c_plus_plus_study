#include <stdio.h>
int main(){
    int a, b, c, d;
    float sum;
    a = 30000;
    b = 15000;
    c = 9750;
    d = 5*345;
    sum = (a+b+c+d)*(1-0.05);
    printf("%10.2f", sum);
    return 0;

}
