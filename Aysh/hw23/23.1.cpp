#include <iostream>
#include <math.h>

class Point {
    private:
        float x,y;

    public:
        Point() {
            x = 0;
            y = 0;
        }
        Point(float X,float Y){
            this->x = X;
            this->y = Y;
        }
        ~Point(){;};
        
        float get_x();
        float get_y();
        float distance(float x_1,float y_1);
        


};




int main() {
    Point p;
    float new_x,new_y;
    std::cout << "Enter x: ";
    std::cin >> new_x;
    std::cout << "Enter y: ";
    std::cin >> new_y;
    std::cout << p.distance(new_x,new_y) << std::endl;


    return 0;
}

float Point::distance(float x_1,float y_1) {
    return sqrt((x_1-get_x()) *(x_1 - get_x()) +(y_1-get_y()) *(y_1 -get_y()));
}
float Point::get_x() {return x;}
float Point::get_y() {return y;}
