#include <stdio.h>
#include <math.h>
#include <locale.h>
float the_area_of_the_circle(float radius){
    float square = 3.14 * pow(radius, 2);
    printf("Площадь окружности: %f\n", square);
    return square;
}
int main(){
    setlocale(LC_ALL, "Russian");
    float radius;
    float square;
    printf("Радиус: ");
    scanf("%f", &radius);
    the_area_of_the_circle(radius);

    return 0;
}


