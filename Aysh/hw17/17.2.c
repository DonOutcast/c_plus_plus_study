#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
    };
int main() {
    struct Time t;
    int changeminutes=0;
    int totalminutes = 0;
    printf("Enter time: \n");
    scanf("%d", &t.hours);
    scanf("%d", &t.minutes);
    scanf("%d", &t.seconds);
    printf("Hours: %d\n", t.hours);
    printf("Minutes: %d\n", t.minutes);
    printf("Seconds: %d\n", t.seconds);

    printf("How many minutes to add?: ");
    scanf("%d", &changeminutes);
     
    totalminutes = t.hours * 60 + t.minutes + changeminutes;
    t.hours = totalminutes / 60;
    t.minutes = totalminutes % 60;
    printf("%d : %d : %d\n", t.hours, t.minutes, t.seconds);
    return 0;
}