/* ������� ����� ��� �������� ���������� � �������������� (���� ������ � ������ ���� int c �������� private).
�������� ����������� ������, ������� ���������� ������� ������ ����������� ����������.
�������� ����� ������, ������� ���������� �������� ������� ��������������. �������� ���������� �������� ������.
�������� ���������, ������� ����� ����������� ���� � ���������� (� ��������� �������) 
�� ������� ������ � ������ ���� ���������������, ����������� ������� ������������ ������� ������.
��������� ������ ������� �� ����� �������� ������� �������� ��������������.

������ ������ ���������:
������� ������:
������:2
������:3
������:1
������:4
�������� ������:
6
*/
#include <iostream>
class Rectangle{
private:
    int width;
    int height;
public:
    Rectangle(int width,int height);
    ~Rectangle();
    void square(class Rectangle x,class Rectangle y);
};
int main(){
    int width,height;
    std::cout <<"Enter width: ";
    std::cin >>width;
    std::cout <<"Enter height: ";
    std::cin >>height;
    Rectangle info(width,height);
    std::cout <<"Enter width: ";
    std::cin >>width;
    std::cout <<"Enter height: ";
    std::cin >>height;
    Rectangle info1(width,height);

    info.square(info,info1);
    return 0;
}
void Rectangle::square(class Rectangle x,class Rectangle y){
    if (x.height * x.width > y.height * x.width){
        std::cout <<x.height * x.width;
    }else{
        std::cout <<y.height * y.width;
    } 
}

    

Rectangle::Rectangle(int width,int height){
    this->height = height;
    this->width = width;
}

Rectangle::~Rectangle(){
    this->height = 0;
    this->width = 0;
}
