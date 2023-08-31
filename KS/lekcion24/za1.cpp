#include<iostream>

class Rectangle
{
    private:
    int width;
    int height;
    public:
    Rectangle(int width_p, int height_p)
    {
        width = width_p;
        height = height_p;
    }
    friend int area(Rectangle &rectangle);
};
int area(Rectangle &rectangle)
{
    return rectangle.width * rectangle.height;
}
int main()
{
    Rectangle rectangle(2,3);
    std::cout << area(rectangle);

    return 0;
}