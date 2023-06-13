#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    char user_answer = 0;
    printf("Уроки сделаны?\n");
    scanf("%c",&user_answer);
    if(user_answer=='y'){
        printf("Молодец!\n");
    }
}