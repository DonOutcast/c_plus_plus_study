#include <iostream>

class Figure
{
    private:
    int width;
    int height;
    public:
    void set_data();
    void set_print(void);

};

int main()
{
    Figure figure;
    figure.set_data();
    figure.set_print();

    return 0;
}
void Figure::set_data()
{
    std::cout << "vvedite weidth and height priamougolnika\n";
    std::cin >> width;
    std::cin >> height;
}
void Figure::set_print()
{
    std::cout << "ploshad " << width * height; 
}
