
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Russian");
    printf(" - ����� � �������� �� ���, �� �������� � ����������� ����������.\n");
    printf(" - ����������� ����������? ��� ���?\n");
    printf(" - ��� ���������� �� c������� �����.\n");
    return 0;
}