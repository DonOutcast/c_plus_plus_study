#include <iostream>
int main() {
    int *array;
    int size = 0;
    std::cout <<"Enter size of the array:"<< std::endl;
    std::cin >> size;
    array = new int[size];
    for(int i = 0;i < size;i++) {
        std::cout << "array["<< i <<"] = ";
        std::cin >> array[i];
}
    std::cout <<"Our array: ";
    for(int i = 0;i < size;i++) {
        std::cout << array[i] << " ";
 }
    std::cout << std::endl;
    delete[] array;
    return 0;
}