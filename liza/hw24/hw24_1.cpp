#include <iostream>
class Rectangle{
    private:
        int width;
        int height;
    public:
        Rectangle(int w, int h){
            this -> width = w;
            this -> height = h;
        }
        ~Rectangle(){;}
        friend int area(Rectangle &rectangle);
};
int area(Rectangle &rectangle){
    return rectangle.width * rectangle.height;
}
int main(){
    int width, height;
    std::cout << "Width: ";
    std::cin >> width;
    std::cout << "Height: ";
    std::cin >> height;
    Rectangle rectangle(width, height);
    std::cout << "Rectangle area: " << area(rectangle) << std::endl;

    return 0;
}