#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a ;
    int b ;
    float c;

    printf( " ������� ����� �\n");
    scanf("%d", &a);

     printf( " ������� ����� b\n");
     scanf("%d", &b);

    c = a + b;
    printf("����� %10.0f\n", c);

    c = a - b;
    printf("�������� %10.0f\n", c);

    c = a * b;
    printf("������������ %10.0f\n", c);

   c =  (float)a / b; 
   printf("�������  %10.2f\n",  c);
    return 0;
}