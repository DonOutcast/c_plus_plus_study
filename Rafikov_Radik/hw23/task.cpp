/* �������� ���������, ������� ����������� ���� ��������� x,y � ���������� (� ��������� �������),
������� ������ ����� � �������������� ��� ���������� �������.
��������� ������ ������� ��������� ������ ������, ������� ������������ ���������� � ��������� �� 2 ������ ����� �������.
�� ������ ������ �������� ������ ������ ������, ��������������� ��� ������������� �� ��������� � ��������  ��������� ������ ������,
������� ������������ ���������� � ��������� �� 2 ������ ����� �������.

������ ������ ���������:
������� ������:
1
1

�������� ������:
1.41
0.00 */
#include <iostream>
#include <math.h>
class Cordinate_points{
private:
    float x;
    float y;
public:
    void enter_x();
    void enter_y();
    void print_x();
    void distance(double new_x,double new_y);
};
int main(){
    Cordinate_points info;
    info.enter_x();
    info.enter_y();
    info.print_x();
    info.distance(1,1);
    return 0;
}
void Cordinate_points::distance(double new_x,double new_y){
    printf("%.2f \n",sqrt(x * new_x + y * new_y));
}
void Cordinate_points::print_x(){
    std::cout << x <<std::endl << y <<std::endl;
}
void Cordinate_points::enter_x(){
    std::cout <<"Enter x: ";
    std::cin >> x;  
}
void Cordinate_points::enter_y(){
    std::cout <<"Enter y: ";
    std::cin >> y;
}

