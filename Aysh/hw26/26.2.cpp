#include <iostream>

int max(int x,int y) {
    if( x > y) {
        return x;
    }
    else {
        return y;
    }
}

double max(double x,double y) {
    if( x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main() {
    int num_1,num_2;
    double num_3,num_4;
    std::cin >> num_1;
    std::cin >> num_2;
    std::cin >> num_3;
    std::cin >> num_4;
    std::cout << max(num_1,num_2) << std::endl;
    std::cout << max(num_3,num_4) << std::endl;
    return 0;
}
