#include <iostream>
#include <cmath>
class Point{
    private:
        double x;
        double y;
    public:
        Point(double coordinates_x = 0, double coordinates_y = 0){
            this -> x = coordinates_x;
            this -> y = coordinates_y;
        }
        double finding_the_distance(Point point);
        
};
int main(){
    double x, y;
    std::cout << "X: ";
    std::cin >> x;
    std::cout << "Y: ";
    std::cin >> y;
    Point point_1(x, y);
    printf("Distance:\n%.2f\n", point_1.finding_the_distance(Point (0, 0)));
    Point point_2;
    printf("%.2f\n", point_2.finding_the_distance(Point (0, 0)));

    return 0;

}
double Point::finding_the_distance(Point point){
    return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
}