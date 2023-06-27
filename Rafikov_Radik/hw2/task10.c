#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int user_answer=0;
    scanf("%d",&user_answer);
    int sum_namber=(user_answer%10)+((user_answer/10)%10)+(user_answer/100);
    if(sum_namber<100&&sum_namber>9){
    printf("Ñóììà öèôğ %d",sum_namber);
    }
}