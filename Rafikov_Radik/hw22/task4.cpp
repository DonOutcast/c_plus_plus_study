/* �������� ���������, ������� ����� ���������� ����� � ������ ������.
��������� ������ ����������� ����� � ������ � ��� ������ (� ��������� ������, ��� ������ - ����� ����� �� 1-3),
������� ����� � �������� ������ ������ ��� ����������� ���� ��� �������� ���� ������ ������,
����� ����� ��� �������� �� ������ � ������ �� ���������� �����,
����� ������ �������� � �������� ���������� ����� � ������ � ��� �����,
���������� ����� � ��������������� ������. ��������������� �� ���������� ���� 1= 60.5, ���� 2= 35.8, ���� 3=0.85.
��������� �������� � ��������� 2 ����� ����� �������.

������ ������ ���������:
������� ����� � ������:100
������� ��� ������ (1-3):3
117.65 */
#include <iostream>

class Currency_translator{
private:
    double count;
    double dollar = 60.5;
    double euro = 35.8;
    double yuan = 0.85;
public:
    void get();
    void translator_and_print();
};
int main(){
    Currency_translator info;
    info.get();
    info.translator_and_print();
    return 0;
}
void Currency_translator::get(){
    std::cout <<"Enter count rubles: ";
    std::cin >>count;
}
void Currency_translator::translator_and_print(){
    int enter;
    std::cout <<"What currency do you need to transfer to?"<<std::endl;
    std::cout <<"Enter 1 of dollar  2 of euro  3 of yuan: ";
    std::cin >> enter;
    if (enter = 1){
        std::cout << count * dollar<<std::endl; 
    }else if (enter == 2){
        std::cout << count * euro<<std::endl;
    }else if (enter ==3){
        std::cout << count * yuan<<std::endl;
    }else{
        std::cout <<"Error"<<std::endl;
    }
}

