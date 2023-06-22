#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");

    int s,u=0;
    wprintf(L"Какая смена(1 или 2)?\n");
    scanf("%d",&s);
    

    if(s==1) {
        wprintf(L"Номер урока(1-6)?\n");
        scanf("%d",&u);
        switch(u)  {
        case 1 : printf("8:00\n");break;
        case 2 : printf("8:50\n");break;
        case 3 : printf("9:50\n");break;
        case 4 : printf("10:50\n");break;
        case 5 : printf("11:50\n");break;
        case 6 : printf("12:40\n");break;
        default : printf("error\n");
        }
    }
        else if(s==2) {
        wprintf(L"Номер урока?\n");
        scanf("%d",&u);
     switch(u)  {
        case 1 : printf("14:00\n");break;
        case 2 : printf("15:50\n");break;
        case 3 : printf("16:50\n");break;
        case 4 : printf("17:50\n");break;
        case 5 : printf("18:50\n");break;
        case 6 : printf("19:40\n");break;
        default : printf("error\n");
     }
    }
    else {
        wprintf(L"Введите корректный номер смены!\n");
    }


    return 0;
    
}