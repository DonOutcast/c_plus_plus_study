/*������� ����� point � ����� ������ private (x,y,z,) � �������� �������� public ��� ������� �������� ����� � ��������� �������� ������� �� �����.
�������� ���������, ������� ����� ����������� ���� �������� ��������� x,y,z (� ��������� �������),
����������� ��������� �������� ����� ������� ������ point � �������� �������� ����� �  �������: 
x=�������� y=�������� z=��������*/
#include <iostream>
#include <string>
class Point{
private:
    int x;
    int y;
    int z;
public:
    void set();
    void get();
};
int main(){
    Point info;
    info.set();
    info.get();
    return 0;
}
void Point::set(){
    std::cout <<"Enter x: ";
    std::cin >> x;
    std::cout <<"Enter y: ";
    std::cin >> y;
    std::cout <<"Enter z: ";
    std::cin >> z;
}
void Point::get(){
    std::cout <<"x = "<< x <<" y = "<< y <<" z = "<< z <<std::endl;
}

