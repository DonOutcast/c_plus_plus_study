#include<iostream>

int max(int a, int b)
{
    return a > b ? a : b; 
}
double max(double a, double b)
{
    return a > b ? a : b; 
}

int main()
{
    int a;
    int b;
    double c;
    double v;
    std::cin >> a;
    std::cin >> b;
    std::cout << max(a,b);
    std::cout << "\n";
    std::cin >> c;
    std::cin >> v;
    std::cout << max(c,v);

    return 0;
}