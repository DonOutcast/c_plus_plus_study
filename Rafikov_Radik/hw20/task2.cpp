/* ���������� ������� �������
�������� ���������, ������� ������� ������ �������������� ������� � ��������� ��� ����������.
����� ��������� ������������ ������ ����� ������ �������, ������� ��������.
� �������������� ��������� new[], ��������� ������ ������� � ��������� ����� �������� ���������� ����������. 
����� ���������� ������ � ��������, ���������� ���������� ������. */
#include <iostream>

int main(){
    int array[2];
    for (int i = 0; i < 2; i++){
        std::cout << "array["<<i<<"]: ";
        std::cin >> array[i];
    }
    int size = 0;
    std::cout <<"Enter size array: ";
    std::cin >>size;
    size += 2;
    int array = new int[size];
    for (int i = 0; i < size ; i++){
        std::cout << "array["<<i<<"]: ";
        std::cin >> array[i];
    }
    for (int i = 0; i < size; i++){
        std::cout <<array[i]<<" ";
    }

    return 0;
}