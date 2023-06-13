#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int one_namber=0;
    int two_namber=0;
    scanf("%d %d",&one_namber,&two_namber);
    if(one_namber/two_namber>0){
        printf("%d",one_namber);
        printf(" делиться на ");
        printf("%d",two_namber);
    }
}