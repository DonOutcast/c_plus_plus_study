#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
int user_answer = 0;
scanf("%d",&user_answer);
if(user_answer%5==0&&user_answer%10!=0){
    printf("Число %d -заканчивается на 5.",user_answer);
}

}