#include <iostream>
class Rectangle{
    private:
        int height;
        int width;
    public:
        Rectangle(int h, int w){
            this -> height = h;
            this -> width = w;
        }
        int get_area();
        ~Rectangle(){}
};
int main(){
    int h_1, w_1, h_2, w_2;
    std::cout << "Rectangle 1:" << std::endl;
    std::cout << "Height: ";
    std::cin >> h_1;
    std::cout << "Width: ";
    std::cin >> w_1;
    Rectangle rect_1(h_1, w_1);

    std::cout << "Rectangle 2:" << std::endl;
    std::cout << "Height: ";
    std::cin >> h_2;
    std::cout << "Width: ";
    std::cin >> w_2;
    Rectangle rect_2(h_2, w_2);

    if (rect_1.get_area() > rect_2.get_area()){
        std::cout << "Area: " << rect_1.get_area() << std::endl;
    } else {
        std::cout << "Area: " << rect_2.get_area() << std::endl;
    }
    return 0;
}
int Rectangle::get_area(){
    return height * width;
}
