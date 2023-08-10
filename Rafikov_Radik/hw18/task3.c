// Создайте структуру "Точка", содержащую поля для координат x и y. Напишите функцию "расстояние",
// которая принимает две структуры "Точка" в качестве параметров и возвращает расстояние между ними.
#include <stdio.h>
#include <math.h>
struct Point{
    int x;
    int y;
};
struct Point entering_coordinates(struct Point info){
    printf("Enter X: ");
    scanf("%d",&info.x);
    printf("Enter Y: ");
    scanf("%d",&info.y);
    return info;
}
float distance_between_points(struct Point A,struct Point B){
    float result = sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
    return result;
}
int main(){
    struct Point A;
    struct Point B;
    printf("Enter coordinates point A:\n");
    struct Point newA = entering_coordinates(A);
    printf("Enter coordinates point B:\n");
    struct Point newB = entering_coordinates(B);
    printf("Distance between points: %f",distance_between_points(newA,newB));

    return 0;
}