// 5.  Создайте структуру "Время", содержащую поля для часов, минут и секунд.
//  Напишите функцию "следующаяМинута", которая принимает структуру "Время"
//  в качестве параметра и изменяет ее, чтобы отразить следующую минуту времени.

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};


void nextMinute(struct Time* time) {
    time->minutes += 1;

    if (time->minutes == 60) {
        time->minutes = 0;
        time->hours += 1;

        if (time->hours == 24) {
            time->hours = 0;
        }
    }
}

int main() {
    
    struct Time current;

    printf("Enter the current time:\n");
    scanf("%d%d%d", &current.hours, &current.minutes, &current.seconds);

    nextMinute(&current);

    printf("Next minute: %02d:%02d:%02d\n", current.hours, current.minutes, current.seconds);

    return 0;
}