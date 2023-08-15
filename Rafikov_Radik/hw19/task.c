/*Напишите программу, которая имитирует таймер, выводящий значения часов, минут и секунд:
00:00:01
00:00:02
00:00:03
00:00:04
В программе объявите глобальную структуру my_time, но при этом не объявляйте никакие другие переменные программы.
 Внутри main() объявите структуру systime и инициализируйте её значением 00:00:00.
  systime непосредственно видна только в функции main().
Опишите функции update() (изменяет значения времени) и display() (выводит эти значения), функциям должен передаваться адрес структуры systime.
 Аргументы в обеих функциях объявите как указатель на структуру my_time.
Внутри update() и display() доступ к каждому члену systime должен осуществляется с помощью указателя.
 Так как функция update() принимает указатель на структуру systime, то она в состоянии обновлять значение этой структуры.
  Например, необходимо "в полночь", когда значение переменной, в которой хранится количество часов,
   станет равным 24, сбросить отсчет и снова сделать значение этой переменной равным 0:
if(t->hours==24) t->hours = 0;
Таким образом, компилятору дается указание взять адрес t (этот адрес указывает на переменную systime из main()) и сбросить значение hours в нуль.
Для проверки сделайте не бесконечный тест, а 100 повторений.*/
#include <stdio.h>
struct My_time{
    int hours;
    int minutes;
    int seconds;
};
struct My_time update(struct My_time *point_systime){
    point_systime->seconds++;
    if (point_systime->seconds > 59){
        point_systime->minutes++;
        point_systime->seconds = 0;
        if (point_systime->minutes > 59){
            point_systime->hours++;
            point_systime->minutes = 0;
            if (point_systime->hours > 23){
                point_systime->hours = 0;
            }   
        } 
    }
    return *point_systime;   
}
struct My_time display(struct My_time *point_systime){ 
    if (point_systime->hours < 10){
        printf("0%d:",point_systime->hours);
    }else{
        printf("%d:",point_systime->hours);
    }
    if (point_systime->minutes < 10){
        printf("0%d:",point_systime->minutes);
    }else{
        printf("%d:",point_systime->minutes);
    }
    if (point_systime->seconds < 10){
        printf("0%d",point_systime->seconds);
    }else{
        printf("%d",point_systime->seconds);
    }
    return *point_systime;
}
int main(){
    struct My_time systime = {00,00,00};
    struct My_time *point_systime = &systime;
    int count = 0;
    while (count < 100){
        update(point_systime);
        display(point_systime);
        printf("\n");
        count++;
    }
    return 0;
}