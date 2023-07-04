#include <stdio.h>
int main() {
    int a = 1, b = 1, c, i = 2;
    printf("%d\n%d\n", a, b);
    while (i < 10){
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
        i ++;
    }
    return 0;
}
    
