#include <stdio.h>
//#include <iostream>
#include <locale.h>
//using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    printf("Уроки сделаны\n");

    char answer;
    scanf("%c", &answer);

    if (answer == 'y')
    {
        printf( "уроки сделаны");
    }else
    {
        printf( " не сделаны ");
    }

    return 0;
}