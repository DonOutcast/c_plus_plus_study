#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    printf("����� �������?\n");
    char a;
    scanf("%c", &a);
    if(a == 'y'){
        printf("�������!\n");
    }
    return 0;
}