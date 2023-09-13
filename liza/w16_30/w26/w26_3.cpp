#include <iostream>
int subtract(int x, int y){
    return x - y;
}
double subtract(double x, double y){
    return x - y;
}
int main(){
    std::cout << subtract(5, 3) << std::endl;
    std::cout << subtract(4.5, 1.2) << std::endl;

    return 0;
}