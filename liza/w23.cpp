#include <iostream>
#include <cmath>
class Point{
    private:
        double x;
        double y;
    public:
        Point(double coordinates_x, double coordinates_y){
            this -> x = coordinates_x;
            this -> y = coordinates_y;
        }
        Point(){
            x = 0;
            y = 0;
        }
        ~Point(){;};
        double get_x(){
            return x;
        }
        double get_y(){
            return y;
        }
        double search_distance(double new_x, double new_y);
};

int main(){
    Point cor(5, 6);
    std::cout << cor.get_x() << std::endl;
    std::cout << cor.get_y() << std::endl;
    double dist = cor.search_distance(0, 0);
    std::cout << "distance: " << dist << std::endl;
    return 0;
}
double Point::search_distance(double new_x, double new_y){
    double distance = sqrt((new_x - x)*(new_x - x) + (new_y - y)*(new_y - y));
    return distance;
}