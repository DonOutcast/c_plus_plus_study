#include <iostream>

class Point
{
    private:
    int x;
    int y;
    int z;

    public:
    void get_x();
    void get_y();
    void get_z();
    void set_print(void);
};

int main()
{
    Point point;

    point.get_x();
    point.get_y();
    point.get_z();

    point.set_print();
  
    return 0;
}
void Point::get_x() {
    std::cin >> x;
}
void Point::get_y() {
    std::cin >> y;
}
void Point::get_z() {
    std::cin >> z;
}
void Point::set_print(void) {
    std::cout << x << " " << y << " " << z;
}