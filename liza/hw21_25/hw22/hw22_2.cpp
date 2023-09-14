#include <iostream>
class Figure{
    private:
        int width;
        int height;
    public:
        void set_data(void);
        void print_data(void);
};
int main(){
    Figure figure;
    figure.set_data();
    figure.print_data();
    return 0;
}
void Figure::set_data(void){
    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Height: ";
    std::cin >> height;
}
void Figure::print_data(void){
    int area = width * height;
    std::cout << "Rectangle area: " << area << std::endl;
}