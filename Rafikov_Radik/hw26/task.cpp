/*�������� ��������� � ������������� �������� show_message(), ������� ����� �������� ����, ��� ��� ��� ��������� ���������.
 ���� �������� ����- ��������� ���������� ��������� ��������, ���� ��������� ���- ��������� ������������ ����� ����������� �������� 
 (������ �����������, ��� ������ ����� ������), ���� ��������� ���- ��������� ������������ ����� ����������� �������� (������ �����������,
  ��� ������ ����� ������). 
��������� ������ ����������� ��� ��������� �������� (s1,s2,s3) � �������� � ��������� ������� ��������� ������ ������� show_message(s1),
 show_message(s1,s2), show_message(s1, s2, s3).
������ ������ ���������:
������� ������:
����
����
����
�������� ������:
����
���� ����
���� ���� ����*/
#include <iostream>
#include <string>
std::string show_messeage(std::string x){
    return x;
}
std::string show_messeage(std::string x,std::string y){
    return x+" "+y;
}
std::string show_messeage(std::string x,std::string y,std::string z){
    return x+" "+y+" "+z;
}
int main(){
    std::string one_word;
    std::string two_word;
    std::string three_word;
    std::cin >> one_word;
    std::cin >> two_word;
    std::cin >> three_word;
    std::cout << show_messeage(one_word) <<std::endl;
    std::cout << show_messeage(one_word,two_word) <<std::endl;
    std::cout << show_messeage(one_word,two_word,three_word) <<std::endl;
    return 0;
}
