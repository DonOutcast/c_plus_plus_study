#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    int a;
    scanf("%d", &a);
    if (a%2 == 0)
    {
        printf("„исло <%d> - чЄтное.", a);
    }
    return 0;
}