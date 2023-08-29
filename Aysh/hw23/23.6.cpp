#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int width_new, int height_new) {
        this->width = width_new;
        this->height = height_new;
    }

    int square();
    

    ~Rectangle() {;};
};

int main() {
    int width_1,width_2;
    int height_1,height_2;
    std::cout << "Width: ";
    std::cin >> width_1;
    std::cout << "Height: ";
    std::cin >> height_1;
    Rectangle rectangle_1(width_1,height_1);
    std::cout << "Width: ";
    std::cin >> width_2;
    std::cout << "Height: ";
    std::cin >> height_2;
    Rectangle rectangle_2(width_2,height_2);
    if(rectangle_1.square() > rectangle_2.square()) {
        std::cout << rectangle_1.square() << std::endl;
    }
    else if(rectangle_1.square() < rectangle_2.square()) {
        std::cout << rectangle_2.square() << std::endl;
    }
    else {
        std::cout << "Squares are equal!"<< std::endl << rectangle_1.square() <<std::endl;
    }
   return 0;
}
  int Rectangle::square() {
      return width * height;
    }