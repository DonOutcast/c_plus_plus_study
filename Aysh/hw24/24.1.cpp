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
    ~Rectangle() {
        this->width = 0;
        this->height = 0;
    }
    friend int area(Rectangle &rectangle);

};

int main() {
    int width_1,height_1;
    std::cout << "Width: ";
    std::cin >> width_1;
    std::cout << "Height: ";
    std::cin >> height_1;
    Rectangle rec(width_1,height_1);
    std::cout << area(rec) << std::endl;
    return 0;
}
int area(Rectangle &rectangle) {
    return rectangle.height * rectangle.width;
}

