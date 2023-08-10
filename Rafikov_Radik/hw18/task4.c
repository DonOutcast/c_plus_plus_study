// Создайте структуру "Время", содержащую поля для часов, минут и секунд. Напишите функцию "следующаяМинута",
// которая принимает структуру "Время" в качестве параметра и изменяет ее, чтобы отразить следующую минуту времени.
#include <stdio.h>
struct Time{
    int hours;
    int minutes;
    int seconds;
};
struct Time enter_time(struct Time info){
    printf("Enter hours: ");
    scanf("%d",&info.hours);
    printf("Enter minutes: ");
    scanf("%d",&info.minutes);
    printf("Enter seconds: ");
    scanf("%d",&info.seconds);
    return info;
}
struct Time next_minutes(struct Time info){
    printf("%d:%d:%d\n",info.hours,info.minutes+1,info.seconds);
    return info;
}
int main(){
    struct Time info;
    struct Time next_time = enter_time(info);
    next_minutes(next_time);
    return 0;
}