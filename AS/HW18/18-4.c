// 4.  Создайте структуру "Точка", содержащую поля для координат x и y. 
// Напишите функцию "расстояние", которая принимает 
// две структуры "Точка" в качестве параметров и возвращает расстояние между ними.

#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};


float distance(struct Point p1, struct Point p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    struct Point p1, p2;
    
    printf("Enter coordinates of the 1st point (x y): ");
    scanf("%d %d", &p1.x, &p1.y);
    
    printf("Enter coordinates of the 2nd point (x y): ");
    scanf("%d %d", &p2.x, &p2.y);
    
    float dist = distance(p1, p2);
    printf("distance between point1 and point2: %f\n", dist);
    
    return 0;
}