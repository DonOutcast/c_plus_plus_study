#include <iostream>
int main(){
    int size;
    std::cout << "Array size: ";
    std::cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; i++){
        std::cout << "Array[" << i <<"] = ";
        std::cin >> array[i];
    }
    std::cout << "Array: " << std:: endl;
    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    delete[] array;
    return 0;

}