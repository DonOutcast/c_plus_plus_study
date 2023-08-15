/*�������� ���������, ������� ��������� ������, ��������� �������� �����, ����� � ������:
00:00:01
00:00:02
00:00:03
00:00:04
� ��������� �������� ���������� ��������� my_time, �� ��� ���� �� ���������� ������� ������ ���������� ���������.
 ������ main() �������� ��������� systime � ��������������� � ��������� 00:00:00.
  systime ��������������� ����� ������ � ������� main().
������� ������� update() (�������� �������� �������) � display() (������� ��� ��������), �������� ������ ������������ ����� ��������� systime.
 ��������� � ����� �������� �������� ��� ��������� �� ��������� my_time.
������ update() � display() ������ � ������� ����� systime ������ �������������� � ������� ���������.
 ��� ��� ������� update() ��������� ��������� �� ��������� systime, �� ��� � ��������� ��������� �������� ���� ���������.
  ��������, ���������� "� �������", ����� �������� ����������, � ������� �������� ���������� �����,
   ������ ������ 24, �������� ������ � ����� ������� �������� ���� ���������� ������ 0:
if(t->hours==24) t->hours = 0;
����� �������, ����������� ������ �������� ����� ����� t (���� ����� ��������� �� ���������� systime �� main()) � �������� �������� hours � ����.
��� �������� �������� �� ����������� ����, � 100 ����������.*/
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