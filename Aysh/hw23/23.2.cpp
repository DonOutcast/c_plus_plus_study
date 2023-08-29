#include <iostream>
#include <math.h>
#include <iomanip>

class Point {
    private:
        float x,y;

    public:
        Point() {
            x = 0;
            y = 0;
        }
        Point(float x_1,float y_1){
            this->x = x_1;
            this->y = y_1;
        }
        ~Point(){;};
        
        
        float distance();
        


};




int main() {
  
    float new_x,new_y;
    std::cout << "Enter x: ";
    std::cin >> new_x;
    std::cout << "Enter y: ";
    std::cin >> new_y;
    Point p(new_x,new_y);
    Point p1;
    std::cout <<std::fixed << std::setprecision(2) << p.distance() << std::endl;
    std::cout <<std::fixed << std::setprecision(2) << p1.distance() << std::endl;



    return 0;
}

float Point::distance() {
    return sqrt((x*x)+ (y*y));
}
