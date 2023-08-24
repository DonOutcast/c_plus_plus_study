#include <iostream>

class Figure {
    int width,height;

    public:
    void Set_Data(int W,int H);
    void Print();

};
void Figure::Set_Data(int W,int H) {
    width = W;
    height = H;
}
void Figure::Print() {
    std::cout << "Square: " << width * height << std::endl;
}

int main() {
    Figure f;
    int w_1 = 0;
    int h_1 = 0;
    std::cout << "Enter width: ";
    std::cin >> w_1;
    std::cout << "Enter height: ";
    std::cin >> h_1;
    f.Set_Data(w_1,h_1);
    f.Print();
    return 0;
}
