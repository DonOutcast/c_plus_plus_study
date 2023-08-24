#include <iostream>

class Point {
    int x,y,z;

    public:
    void Set_x(int X);
    void Set_y(int Y);
    void Set_z(int Z);
    void Get_xyz();
};

void Point::Set_x(int X) {
    x = X;
}
void Point::Set_y(int Y) {
    y = Y;
}
void Point::Set_z(int Z) {
    z = Z;
}
void Point::Get_xyz() {
    std::cout <<"x = " << x <<" "<< "y = " << y <<" "<<"z = " << z  << " "<< std::endl;
}


int main() {
    Point p;
    int x_1 = 0;
    int y_1 = 0;
    int z_1 = 0;
    std::cout << "Enter x: ";
    std::cin >> x_1;
    std::cout << "Enter y: ";
    std::cin >> y_1;
    std::cout << "Enter z: ";
    std::cin >> z_1;
    p.Set_x(x_1);
    p.Set_y(y_1);
    p.Set_z(z_1);
    p.Get_xyz();
    return 0;
}
