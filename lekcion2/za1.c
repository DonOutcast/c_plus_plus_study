#include <stdio.h>
//#include <iostream>
#include <locale.h>
//using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("����� �������\n");

    char answer;
    scanf("%c", &answer);

    if (answer == 'y')
    {
        printf( "����� �������");
    }else
    {
        printf( " �� ������� ");
    }

    return 0;
}