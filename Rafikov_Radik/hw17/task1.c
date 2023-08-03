// Напишите программу, которая будет хранить время в структуре (часы, минуты, секунды).
// Программа должна запрашивать ввод времени с клавиатуры, а также изменение времени в минутах.
// Программа должна вывести новое время с учетом изменения.
#include <stdio.h>
struct time{
    int hours;
    int minute;
    int second;
};
/*void PrintTime(struct time){
    struct time info; 
    printf("Enter hours: ");
    scanf("%d",&info.hours);
    printf("Enter minute: ");
    scanf("%d",&info.minute);
    printf("Enter second: ");
    scanf("%d",&info.second);
}*/
int main(){
    struct time info;
    int minute = 0;
    printf("Enter hours: ");
    scanf("%d",&info.hours);
    printf("Enter minute: ");
    scanf("%d",&info.minute);
    printf("Enter second: ");
    scanf("%d",&info.second);*/
    PrintTime(info);
    printf("Real time: %d:%d:%d\n",info.hours,info.minute,info.second);
    // printf("Add minutes:");
    scanf("%d",&minute);
    info.minute += minute;
    if (info.minute > 60){
        info.minute -= 60;
        info.hours++;
    }
    
    printf("Real time: %d:%d:%d\n",info.hours,info.minute,info.second);*/



    return 0;
}