#include <stdio.h>
#include <locale.h>
#include <math.h>
double distance_calculation(double x1, double y1, double x2, double y2){
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}
int main(){
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2;
    printf("���������� ������ �����: ");
    scanf("%lf %lf", &x1, &y1);
    printf("���������� ������ �����: ");
    scanf("%lf %lf", &x2, &y2);
    double distance = distance_calculation(x1, y1, x2, y2);
    printf("���������� ����� �������: %.2lf\n", distance);

    return 0;
}