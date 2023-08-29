#include <iostream>
#include <string.h>
#include <math.h>

class Point
{
    private:
    double x;
    double y;
    public:
    Point(int x_p, int y_p)
    {
        this->x = x_p;
        this->y = y_p;
    };
    Point()
    {
        x = 0;
        y = 0;
    };
    double Metod(double x1, double y1)
    {
         return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1)); 
    }
    int Get_x()
    {
        return x;
    }
    int Get_y()
    {
        return y;
    }
    ~Point(){;};
};

int main()
{
   Point point(3,4);
   std::cout << point.Get_x();
   std::cout << point.Get_y();
   std::cout << "\n";
   Point point1;
   std::cout << point1.Get_x();
   std::cout << point1.Get_y();
   Point point2;
   std::cout << "\n";
   std::cout << point2.Metod(3,4);
   
    return 0;
}