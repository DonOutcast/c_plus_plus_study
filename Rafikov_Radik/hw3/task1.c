// Ќапиши программу, котора€ спрашивает У2+2=?Ф, если пользователь отвечает У4Ф- программа выводит на экран У¬ерно!Ф.
// ¬о всех остальных случа€х выводит Уќшибка!Ф.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    printf("2+2=?\n");
    int namber = 0;
    scanf("%d",& namber);
    if(namber==4){
        printf("¬ерно!\n");
    }else{
        printf("ќшибка!\n");
    }
    return 0;
}