/* ������� ����� ��� �������� ���� (���� � ��� - ������������� ����, ����� ���� ���� char[128], ��� ���� private).
� ������ �������� ��� ������������: �����������, ������� ��������� ������� ��������� � ����������� �� �������� �����,
� ����������� �� ��������� (����������� �������� 01 ������ 2000).
����� � ������ �������� ����� ��� ������ ����� �� ����� � �������: ���� ����� ���. �������� ���������� �������� ������.
�������� ���������, ������� ����������� ���� � ���������� ����, �����, ��� (� ��������� �������) � ���� ��� ������ 2000,
�� �������� ����������� � �����������, � ���� ���- �� �������� ����������� �� ���������.

��� ���������� ������ ���������� �������� ����������� ������� ����������� ������ 
strcpy(������_�_�������_��������, ������_��_�������_��������) �� <cstring>

������ ������ ���������:
������� ������:
20
����
2023

�������� ������:j
20 ���� 2023

������� ������:
10
������     
1995

�������� ������:
1 ������ 2000
*/
#include <iostream>
#include <string>
class Data{
private:
    int day;
    int age;
    std::string month;
public:
    Data(int day,std::string month,int age);
    Data(){day = 01;month = "January";age = 2000;};
    void enter_info();
    ~Data();
};
int main(){
    Data info;
    int day,age;
    std::string month;
    std::cout <<"Enter day: ";
    std::cin >>day;
    std::cout <<"Enter month: ";
    std::cin >>month;
    std::cout <<"Enter age: ";
    std::cin >>age;
    if (age > 2000){
        info.enter_info();
    }else{
        Data info(day,month,age);
        info.enter_info();
    }
    
    return 0;
}
Data::Data(int day,std::string month,int age){
    this->day = day;
    this->month = month;
    this->age = age;
}

Data::~Data(){
    this->day = 0;
    this->month = "";
    this->age = 0;
}
void Data::enter_info(){
    std::cout <<day<<" "<<month<<" "<<age<<std::endl;
}

