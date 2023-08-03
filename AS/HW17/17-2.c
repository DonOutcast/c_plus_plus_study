// Напишите программу, которая будет хранить время в структуре (часы, минуты, секунды).
//  Программа должна запрашивать ввод времени с клавиатуры, а также изменение 
// времени в минутах. Программа должна вывести новое время с учетом изменения.

#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
    };

int main() {
    struct Time a;
    
    printf("Enter time: \n");
    printf ("hours: \n");
    scanf("%d", &a.hours);
    printf ("minutes: \n");
    scanf("%d", &a.minutes);
    printf ("seconds: \n");
    scanf("%d", &a.seconds);
    printf("hours: %d\n minutes: %d\n seconds: %d\n", a.hours, a.minutes, a.seconds);

    int update_time = 0;
    printf("How many min to add?: ");
    scanf("%d", &update_time);

    int min_sum = 0;
    min_sum = a.hours * 60 + a.minutes + update_time;
    a.hours = min_sum / 60;
    a.minutes = min_sum % 60;
    printf("%d:%d:%d\n", a.hours,a.minutes,a.seconds);
    return 0;
}