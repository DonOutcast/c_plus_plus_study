#include <stdio.h>
#include <stdlib.h>

struct My_time {
    int hours;
    int minutes;
    int seconds;
};

void update(struct My_time *change_time) {
    change_time -> seconds++;
    if(change_time -> hours == 24) {
        change_time -> hours = 0;
    }
    if(change_time -> minutes == 60) {
        change_time -> minutes = 0;
        change_time -> hours++;
    }
   if(change_time -> seconds == 60) {
        change_time -> seconds = 0;
        change_time -> minutes++;
   }
  
}

void display(struct My_time *print_time) {
    printf("0%d 0%d %d\n", print_time ->hours, print_time ->minutes, print_time ->seconds);
}

int main() {
    struct My_time systime = {00,00,00};
    for(int i = 0;i < 100;i++) {
        update(&systime);
        display(&systime);
    }
    return 0;
}