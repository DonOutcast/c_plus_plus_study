#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a, sum;
    scanf("%d", a);
    sum = (a/100)+((a/10)%10)+(a%10);
    if (sum>=10 && sum<=99)
    {
        printf("Ñóììà öèôð %d", sum);
    }
    return 0;
}