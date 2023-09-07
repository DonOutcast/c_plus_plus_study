// Напишите программу с перегруженной функцией max(), функция может получать два 
// параметра типа int или два параметра типа double и должна возвращать наибольший из полученных параметров. 
// Программа должна запрашивать ввод с клавиатуры двух целых значений. Затем ввод с
//  клавиатуры двух действительных значений (все значения вводятся в отдельных строках).
//   Программа в отдельных строках должна вывести результат вызова функции max сначала с
//    введенными целыми параметрами, затем в новой строке 
//  вывести результат вызова функции max с введенными действительными параметрами.


#include <iostream>

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2;
    double double1, double2;

    std::cout << "Enter 1st int: ";
    std::cin >> int1;
    std::cout << "Enter 2nd int: ";
    std::cin >> int2;

    std::cout << "Enter 1nd double: ";
    std::cin >> double1;
    std::cout << "Enter 2nd double: ";
    std::cin >> double2;

    int maxInt = max(int1, int2);
    double maxDouble = max(double1, double2);

    std::cout << "Max int: " << maxInt << std::endl;
    std::cout << "Max double: " << maxDouble << std::endl;

    return 0;
}