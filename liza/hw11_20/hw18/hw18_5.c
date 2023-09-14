#include <stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};
struct time measuring_the_next_minute(struct time info){
    struct time result = {info.hours, info.minutes, info.seconds};
    result.minutes++;
    if (result.minutes >= 60){
        result.minutes = 0;
        result.hours++;
        if (result.hours >= 24){
            result.hours = 0;
        }
    }
    return result;
};
int main(){
    struct time info;
    printf("Time: \n");
    scanf("%d %d %d", &info.hours, &info.minutes, &info.seconds);
    struct time next_minute = measuring_the_next_minute(info);
    printf("Time in a minute: %02d:%02d:%02d\n", next_minute.hours, next_minute.minutes, next_minute.seconds);
    return 0;
}