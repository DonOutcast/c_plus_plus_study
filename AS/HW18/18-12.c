// Создайте структуру для хранения координат точки в двумерном пространстве. 
// Создайте массив из 5 таких структур. Программа должна запрашивать координаты 
// точки А и выводить координаты той точки из массива, 
// расстояние между которой и точкой А минимально. Результат выведите в формате x= и y=.


#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

float distance(struct Point a, struct Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    struct Point points[5];
    struct Point pointA;
    float min_distance = -1;
    int closest_point = -1; 

    printf("Enter A coordinates:\n");
    printf("Enter x: ");
    scanf("%f", &pointA.x);
    printf("Enter y: ");
    scanf("%f", &pointA.y);

    printf("Enter coordinates for 5 points:\n");

    for (int i = 0; i < 5; i++) {
        printf("Point %d:\n", i + 1);
        printf("Point x: ");
        scanf("%f", &points[i].x);
        printf("Point y: ");
        scanf("%f", &points[i].y);

        float dist = distance(pointA, points[i]);

        if (min_distance == -1 || dist < min_distance) {
            min_distance = dist;
            closest_point = i;
        }
    }

    printf("Closest point:\n");
    printf("x = %.2f\n", points[closest_point].x);
    printf("y = %.2f\n", points[closest_point].y);

    return 0;
}
