#include <stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};
int main(){
    struct time timing;
    printf("Time: hours, minutes, seconds\n");
    scanf("%d %d %d", &timing.hours, &timing.minutes, &timing.seconds);
    int changing_minutes;
    scanf("%d", &changing_minutes);
    int minutes = timing.hours * 60 + timing.minutes + changing_minutes;
    timing.hours = minutes / 60;
    timing.minutes = minutes % 60;
    printf("Time: %02d:%02d:%02d\n", timing.hours, timing.minutes, timing.seconds);
    return 0;
}