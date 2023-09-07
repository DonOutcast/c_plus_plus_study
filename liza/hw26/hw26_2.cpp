#include <iostream>
#include <cmath>
int max(int x, int y){
    return fmax(x, y);
}
double max(double x, double y){
    return fmax(x, y);
}
int main(){
    int x_1, y_1;
    double x_2, y_2;
    std::cout << "Integers: " << std::endl;
    std::cin >> x_1 >> y_1;
    std::cout << "Actual number: " << std::endl;
    std::cin >> x_2 >> y_2;
    std::cout << "The larger of the integers: " << max(x_1, y_1) << std::endl;
    std::cout << "The greater of the real numbers: " << max(x_2, y_2) << std::endl;
    
    return 0;
}