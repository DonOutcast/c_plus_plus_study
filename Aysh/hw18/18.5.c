#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time next_minute(struct Time new_time) {
    new_time.minutes+=1;
    if(new_time.minutes > 59)
    {
        new_time.minutes = new_time.minutes - 60;
        new_time.hours++;
    }
  printf("Next minute time: %02d:%02d:%02d\n", new_time.hours, new_time.minutes, new_time.seconds);
}

int main() {
    struct Time current_time;
    printf("Enter hours,minutes and seconds:\n");
    scanf("%d", &current_time.hours);
    scanf("%d", &current_time.minutes);
    scanf("%d", &current_time.seconds);
    next_minute(current_time);
    return 0;

}
