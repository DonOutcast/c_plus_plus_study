//Напиши программу, которая выдает информацию о начале урока. Программа должна
// спрашивать пользователя “Какая смена (1 или 2)?”, после того как пользователь
// выбрал смену, программа должна запросить “Номер урока (1-6)?”. Результатом 
// работы программы будет время начала выбранного урока в выбранной смене. 
//1 смена:
//1 урок - 8:00
//2 урок - 8:50
//3 урок - 9:50
//4 урок - 10:50
//5 урок - 11:50
//6 урок - 12:40
//2 смена:
//1 урок - 14:00
//2 урок - 15:50
//3 урок - 16:50
//4 урок - 17:50
//5 урок - 18:50
//6 урок - 19:40

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int a; // смена
    int b; // номер урока
   
    wprintf (L"Какая смена (1 или 2)?");
    scanf ("%d", &a);
    if (a==1)
    {
        wprintf (L"Номер урока (1-6)?\n");
        scanf ("%d", &b);
        switch (b)
            {
            case 1: wprintf (L"8:00\n");break;
            case 2: wprintf (L"8:50\n");break;
            case 3: wprintf (L"9:50\n");break;
            case 4: wprintf (L"10:50\n");break;
            case 5: wprintf (L"11:50\n");break;
            case 6: wprintf (L"12:40\n");break;
            default:  { printf ("error \n");}
   
            }
    }  
    else if (a==2){
        wprintf (L"Номер урока (1-6)?\n");
        scanf ("%d", &b);
        switch (b)
        {       
            case 1: wprintf (L"14:00\n");break;
            case 2: wprintf (L"15:50\n");break;
            case 3: wprintf (L"16:50\n");break;
            case 4: wprintf (L"17:50\n");break;
            case 5: wprintf (L"18:50\n");break;
            case 6: wprintf (L"19:40\n");break;
            default:  { printf ("error \n");}
        }  
        }       
    else { wprintf (L"ошибка ввода");}
    

       return 0;
}