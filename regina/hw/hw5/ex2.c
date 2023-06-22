// Напиши программу, которая выдает информацию о начале урока. Программа должна спрашивать пользователя “Какая смена (1 или 2)?”, после того как пользователь выбрал смену, программа должна запросить “Номер урока (1-6)?”. Результатом работы программы будет время начала выбранного урока в выбранной смене. 
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

int main() {
    printf("What shift? (1 or 2)\n");
    int number1 = 1, n, lesson = 1;
    scanf("%d", &number1);
    if (number1 = 1) {
        printf("Lesson number(1-6)?\n");
        scanf("%d", &lesson);
        switch(lesson) {
            case 1: printf("1 lesson - 8:00");break;
            case 2: printf("2 lesson - 8:50");break;
            case 3: printf("3 lesson - 9:50");break;
            case 4: printf("4 lesson - 10:50");break;
            case 5: printf("5 lesson - 11:50");break;
            case 6: printf("6 lesson - 12:40");break;
            default: printf("Error");
        }
    } else if (number1 = 2) {
                printf("Lesson number(1-6)\n");
        scanf("%d", &lesson);
        switch(lesson) {
            case 1: printf("1 lesson - 14:00");break;
            case 2: printf("2 lesson - 15:50");break;
            case 3: printf("3 lesson - 16:50");break;
            case 4: printf("4 lesson - 17:50");break;
            case 5: printf("5 lesson - 18:50");break;
            case 6: printf("6 lesson - 19:40");break;
            default: printf("Error");
        }
    }
    else {
        printf("Error");
    }
}