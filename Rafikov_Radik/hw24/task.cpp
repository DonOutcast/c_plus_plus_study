/*�������� ����� Rectangle � ������ width, height � �������� private.
�������� ����������� � �����������, ������� ���������� ���� ����������� ���������� ����������.
�������� ������������� �������  area, ������� ���������� �������� �������.
�������� ���������, ������� ����������� ���� � ���������� ������ � ����� �������������� � ��������� �������,
������� ������ ������ Rectangle � �������������� ��� ���������� ����������.
�������� �� ����� ��������� ������ ������� area.*/
#include <iostream>

class Rectangle{
private:
    int width;
    int hight;
protected:

public:
    Rectangle(int x,int y);
    ~Rectangle();
    friend void area(Rectangle &rectangle);
};
void area(Rectangle &rectangle){
    std::cout <<rectangle.hight * rectangle.width;
}
int main(){
    int x,y;
    std::cout <<"Enter width: ";
    std::cin >> x;
    std::cout <<"Enter hight: ";
    std::cin >> y;
    Rectangle info(x,y);
    area(info);
    return 0;
}
Rectangle::Rectangle(int x,int y){
    this->hight = x;
    this->width = y;
}

Rectangle::~Rectangle(){
    this->hight = 0;
    this->width = 0;
}

