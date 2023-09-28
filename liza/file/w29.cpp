#include "w29.hpp"
int main(){
    int a, b;
    std::cout << "A: ";
    std::cin >> a;
    std::cout << "B: ";
    std::cin >> b;
    my::MathematicalFunctions math;
    std::cout << math.plus(a, b) << std::endl;
    std::cout << math.minus(a, b) << std::endl;
    std::cout << math.multiply(a, b) << std::endl;
    std::cout << math.divide(a, b) << std::endl;

    return 0;
}
