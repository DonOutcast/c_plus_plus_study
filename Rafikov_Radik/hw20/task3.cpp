/* �������� ���������� �������
�������� ���������, ������� ����������� � ������������ ���������� ����� � �������� ��� ���������� �������.
� �������������� ��������� new, �������� ������ ��� ���������� ������� � ��������� ��� ���������� �������. �������� ���������� ������� �� �����.
����� ���������� ������ � ��������, ���������� ���������� ������. */
#include <iostream>

int main(){
    int lines;
    int columns;
    std::cout << "Enter lines: ";
    std::cin >>lines;
    std::cout << "Enter columns: ";
    std::cin >>columns;
    int **array = new int*[lines];
    for (int i = 0; i < lines; i++){
        array[i] = new int[columns];
    }
    
    for (int i = 0; i < lines; i++){
        for (int j = 0; j < columns; j++){
             std::cout << "array["<<i<<"]["<<j<<"]: ";
             std::cin >> array[i][j];
        }
    }
    std::cout << "number of array"<<std::endl;
    for (int i = 0; i < lines; i++){
        for (int j = 0; j < columns; j++){
            std::cout <<array[i][j]<<" ";
        }
    std::cout <<std::endl;    
    }
    for (int i = 0; i < lines; i++){
        delete[] array[i];
    }
    delete[] array;
    return 0;
}