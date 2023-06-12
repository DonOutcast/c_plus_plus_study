#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    printf("Уроки сделаны?\n");
    char a;
    scanf("%c", &a);
    if(a == 'y'){
        printf("Молодец!\n");
    }
    return 0;
}