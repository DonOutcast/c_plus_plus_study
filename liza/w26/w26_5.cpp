#include <iostream>
#include <cmath>
int power(int x, int y){
    return pow(x, y);
}
double power(double x, int y){
    return pow(x, y);
}
int main(){
    std::cout << power(2, 3) << std::endl;
    std::cout << power(1.5, 2) << std::endl;

    return 0;
}