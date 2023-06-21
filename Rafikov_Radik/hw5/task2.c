// Напиши программу, которая выдает информацию о начале урока.
// Программа должна спрашивать пользователя “Какая смена (1 или 2)?”,
// после того как пользователь выбрал смену, программа должна запросить “Номер урока (1-6)?”.
// Результатом работы программы будет время начала выбранного урока в выбранной смене. 
// 1 смена:
// 1 урок - 8:00
// 2 урок - 8:50
// 3 урок - 9:50
// 4 урок - 10:50
// 5 урок - 11:50
// 6 урок - 12:40
// 2 смена:
// 1 урок - 14:00
// 2 урок - 15:50
// 3 урок - 16:50
// 4 урок - 17:50
// 5 урок - 18:50
// 6 урок - 19:40
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int answer = 0;
    printf("Какая смена (1 или 2)?\n");
    scanf("%d",&answer);
    if (answer == 1)
    {
        printf("Номер урока (1-6)?\n");
        int answer2 = 0;
        scanf("%d",&answer2);
        switch (answer2)
        {
        case 1:
            printf("8:00");
            break;
        case 2:
            printf("8:50");
            break;
        case 3:
            printf("9:50");
            break;
        case 4:
            printf("10:50");
            break;
        case 5:
            printf("11:50");
            break;
        case 6:
            printf("12:40");
            break;
        
        default:
            printf("Error");
            break;
        }
    }
    else if (answer == 2)
    {
        printf("Номер урока (1-6)?\n");
        int answer2 = 0;
        scanf("%d",&answer2);
        switch (answer2)
        {
        case 1:
            printf("14:00");
            break;
        case 2:
            printf("15:50");
            break;
        case 3:
            printf("16:50");
            break;
        case 4:
            printf("17:50");
            break;
        case 5:
            printf("18:50");
            break;
        case 6:
            printf("19:40");
            break;
        
        default:
            printf("Error");
            break;
        }
    }
    else
    {
        printf("Error");
    }
    
    
    return 0;
}