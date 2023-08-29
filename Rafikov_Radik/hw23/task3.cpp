/* O������ ����� ��� �������� ���������� � ���������� (���� fname, lname ���� char[128],
���� salary ���� double c �������� private). �������� ����������� ������, ������� ���������� ������� ������ ����������� ����������.
�������� ����� ������, ������� ���������� �������� ���� salary �������. �������� ����� ������ ��� ��������� �������� ���� salary �������.
�������� ������� average ��� ������ ���������� � ������� ��������. �������� ���������� �������� ������.
�������� ���������, ������� ����� ����������� ���� � ���������� (� ��������� �������) �� ������� ���,
�������, �������� ���� �����������, ����������� ������� ������������ ������� ������.
��������� ������ ������� ������� average, ������� ������� �������� ������� �������� (� ��������� �� ���� ������ ����� �������),
������� average ������ �������� � �������� ���������� �������� ����� salary ���� �������� ������.

��� ���������� ����� � ������� ���������� �������� ����������� 
������� ����������� ������ strcpy(������_�_�������_��������, ������_��_�������_��������) �� <cstring>.
������ ������ ���������:
������� ������:
����
������
10000
����
������
20000
������
�������
15000

�������� ���������:
15000.00 */
#include <iostream>
#include <string>
class Staff{
private:
    std::string fname;
    std::string lname;
    double salary;
public:
void enter_info();
double get();

};
void average(double x, double y, double z){
    printf("%2.f",(x + y + z) / 3);    
}
int main(){
    Staff info1,info2,info3;
    info1.enter_info();
    info2.enter_info();
    info3.enter_info();
    average(info1.get(),info2.get(),info3.get());
}
void Staff::enter_info(){
    std::cout <<"Enter fname: ";
    std::cin >>fname;
    std::cout <<"Enter lname: ";
    std::cin >>lname;
    std::cout <<"Enter salary: ";
    std::cin >>salary;
}
double Staff::get(){
    return salary;
}
