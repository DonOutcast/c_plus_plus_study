#include <stdio.h>
#include <stdlib.h>
struct My_time{
    int hours;
    int minutes;
    int seconds;
};
void update(struct My_time *time){
    time->seconds++;
    if (time->seconds >= 60){
        time->seconds = 0;
        time->minutes++;
        if (time->minutes >= 60){
            time->minutes = 0;
            time->hours++;
            if (time->hours >= 24){
                time->hours = 0;
            }
        }
    }
}
void display(struct My_time *time){
    printf("%02d:%02d:%02d\n", time->hours, time->minutes, time->seconds);
}
int main(){
    struct My_time systime = {0, 0, 0};
    for (int i = 0; i < 100; i++){
        update(&systime);
        display(&systime);
    }
    return 0;
}