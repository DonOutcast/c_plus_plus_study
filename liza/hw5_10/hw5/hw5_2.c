#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int shift, lesson;
    printf("Какая смена (1 или 2)?\n");
    scanf("%d", &shift);
    switch(shift){
        case 1:
        printf("Номер урока (1-6)?\n");
        scanf("%d", &lesson);
        switch(lesson){
            case 1:
            printf("1 урок - 8:00\n");
            break;
            case 2:
            printf("2 урок - 8:50\n");
            break;
            case 3:
            printf("3 урок - 9:50\n");
            break;
            case 4:
            printf("4 урок - 10:50\n");
            break;
            case 5:
            printf("5 урок - 11:50\n");
            break;
            case 6:
            printf("6 урок - 12:40\n");
            break;
            default:
            printf("Error\n");
        } 
        break;
        case 2:
        printf("Номер урока (1-6)?\n");
        scanf("%d", &lesson);
        switch(lesson){
            case 1:
            printf("1 урок - 14:00\n");
            break;
            case 2:
            printf("2 урок - 15:50\n");
            break;
            case 3:
            printf("3 урок - 16:50\n");
            break;
            case 4:
            printf("4 урок - 17:50\n");
            break;
            case 5:
            printf("5 урок - 18:50\n");
            break;
            case 6:
            printf("6 урок - 19:40\n");
            break;
            default:
            printf("Error\n");
        }
        break;
        default:
        printf("Error\n");
    }
    return 0;
}