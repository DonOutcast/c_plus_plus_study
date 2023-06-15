#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a;
    scanf("%d", &a);
    if (a>0 && a%2==0)
    {
        printf("Число <%d> - подходит.", a);
    }
    return 0;
}
