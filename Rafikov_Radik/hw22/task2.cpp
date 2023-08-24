/* ������� �����  Figure � �������������� ������ width, height � �������� private,
�����  setData, ������� ����������� ����� ��������, ����� print, ������� ������� ������� �������������� � �������: ��������:��������.
�������� ���������, ������� ����� ����������� ���� �������� ����� � ������ �������������� � ���������� (� ��������� �������),
��������� ���� ������ � �������� � ������� ������ print ���������� � ������� ������. */
#include <iostream>
class Figure{
private:
    int width;
    int height;
public:
    void setData();
    void print();
};
int main(){
    Figure info;
    info.setData();
    info.print();
    return 0;
}

void Figure::setData(){
    std::cout <<"Enter width: ";
    std::cin >> width;
    std::cout <<"Enter height: ";
    std::cin >> height;
}

void Figure::print(){
    std::cout <<"Square: "<<width * height<<std::endl;
}
