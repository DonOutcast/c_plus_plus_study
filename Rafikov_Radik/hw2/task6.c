#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int user_answer=0;
    scanf("%d",&user_answer);
    if(user_answer>=10){
        printf("�� �������!");
    }
}