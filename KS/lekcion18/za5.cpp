#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};
struct time func(struct time var)
{
    var.minute += 1;

    if(var.minute > 59)
    {
        var.minute = var.minute - 60;
        var.hour++;
    }
    printf("%d:%d:%d", var.hour, var.minute, var.second);
}

int main()
{
   struct time var;
   printf("vvedite vremia hpurs, minutes seconds\n");
   scanf("%d", &var.hour);
   scanf("%d", &var.minute);
   scanf("%d", &var.second);
   printf("%d:%d:%d\n", var.hour, var.minute, var.second);
   printf("vremia uvelichenoe na 1 minute\n");
   func(var);

    return 0;
}