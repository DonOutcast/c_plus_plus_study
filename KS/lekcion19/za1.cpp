#include <stdio.h>

struct Mytime
{
    int hours;
    int minutes;
    int seconds;
};
void update(struct Mytime *time)
{
    time->seconds++;
    if(time->seconds == 60)
    {
        time->seconds = 0;
        time->minutes++;
    }
    if(time->minutes == 60)
    {
        time->minutes = 0;
        time->hours++;
    }
    if(time->hours == 24)
    {
        time->hours = 0;
    }
}
void display(struct Mytime *timeprint)
{
    printf("%d:", timeprint->hours);
    printf("%d:", timeprint->minutes);
    printf("%d\n", timeprint->seconds);
}

int main()
{
    struct Mytime systime;

    systime.hours = 0;
    systime.minutes = 0;
    systime.seconds = 0;

    for(int i = 0; i < 100; i++)
    {
        update(&systime);
        display(&systime);
    }
    return 0;
}