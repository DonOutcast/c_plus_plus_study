/* ������� ����� ��� �������� ���������� � �������� (���� fname, lname ���� char[128], ���� age ���� int c �������� private).
�������� ����������� ������, ������� ���������� ������� ������ ����������� ����������.
�������� ����� ������, ������� ���������� �������� ���� age �������.
�������� ����� print ��� ������ ���������� �� ������� �� ����� � �������: "��� ������� ������� ���".
�������� ���������� �������� ������.
�������� ���������, ������� ����� ����������� � ���������� (� ��������� �������) �� ������� ���,
�������, ������� ���� ���������, ����������� ������� ������������ ������� ������.
��������� ������ ������� ����� print  � ������� � ���������� ��������� ���� age (�������� ��������).

��� ���������� ����� ��� � ������� ���������� �������� ����������� ������� ����������� 
������ strcpy(������_�_�������_��������, ������_��_�������_��������) �� <cstring>.
������ ������ ���������:
������� ������:
����
������
20
����
������
25
�������� ������:
���� ������ 25 ���
*/
#include <iostream>
#include <string>

class Student{
private:
    std::string fname;
    std::string lname;
    int age;
public:
    void enter_fname();
    void enter_lname();
    void ernter_age();
    void print_info();
    int get(){return age;};

};
int main(){
    Student info1,info2;
    std::cout <<"Enter info student one."<<std::endl;
    info1.enter_fname();
    info1.enter_lname();
    info1.ernter_age();
    std::cout <<"Enter info student two."<<std::endl;
    info2.enter_fname();
    info2.enter_lname();
    info2.ernter_age();
    if (info1.get() > info2.get()){
        info1.print_info();
    }else{
        info2.print_info();
    }
}
void Student::enter_fname(){
    std::cout << "Enter fname: ";
    std::cin >>fname;
}
void Student::enter_lname(){
    std::cout <<"Enter lname: ";
    std::cin >>lname;
}
void Student::ernter_age(){
    std::cout <<"Enter age: ";
    std::cin >>age;
}
void Student::print_info(){
    std::cout <<fname<<" "<<lname<<" "<<age<<" age"<<std::endl;
}



