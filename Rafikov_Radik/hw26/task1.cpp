/*�������� ��������� � ������������� �������� max(), ������� ����� �������� ��� ��������� ���� int ��� ���
��������� ���� double � ������ ���������� ���������� �� ���������� ����������. 
��������� ������ ����������� ���� � ���������� ���� ����� ��������.
����� ���� � ���������� ���� �������������� �������� (��� �������� �������� � ��������� �������).
���o������ � ��������� ������� ������ ������� ��������� ������ ������� max ������� � ���������� ������ �����������,
����� � ����� ������  ������� ��������� ������ ������� max � ���������� ��������������� �����������.*/
#include <iostream>
int max(int x,int y){
    int z;
    if (x > y){
        z = x;
    }else{
        z = y;
    }
    return z;   
}
double max(double x,double y){
    double z;
    if (x > y){
        z = x;
    }else{
        z = y;
    }
    return z;
}
int main(){
    int i_x,i_y;
    double d_x,d_y;
    std::cout <<"Enter int x and y: "<<std::endl;
    std::cin >> i_x >> i_y;
    std::cout <<"Enter double x and y: "<<std::endl;
    std::cin >> d_x >> d_y;
    std::cout << max(i_x,i_y) <<std::endl;
    std::cout << max(d_x,d_y) <<std::endl;
    return 0;
}