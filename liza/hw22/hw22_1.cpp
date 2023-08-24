#include <iostream>
class Point{
    private:
        int x;
        int y;
        int z;
    public:
        void assigning_a_value_x(void);
        void assigning_a_value_y(void);
        void assigning_a_value_z(void);
        void output_of_values(void);
};
int main(){
    Point point;
    point.assigning_a_value_x();
    point.assigning_a_value_y();
    point.assigning_a_value_z();
    point.output_of_values();
    return 0;
}
void Point::assigning_a_value_x(void){
    std::cin >> x;
}
void Point::assigning_a_value_y(void){
    std::cin >> y;
}
void Point::assigning_a_value_z(void){
    std::cin >> z;
}
void Point::output_of_values(void){
    std::cout << "X:" << x << " Y:" << y << " Z:" << z << std::endl;
}


