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
    std::cout << std::endl;
    int new_size;
    std::cout << "Array size 2.0: ";
    std::cin >> new_size;
    int *array_2 = new int[new_size];
    if (new_size > size){
        for (int i = 0; i < size; i++){
            array_2[i] = array[i];
        }
        for (int i = size; i < new_size; i++){
            std::cout << "Array_2[" << i <<"] = ";
            std::cin >> array_2[i];
        }
        delete[] array;
        array = array_2;
        size = new_size;
        std::cout << "Array 2.0: " << std::endl;
        for (int i = 0; i < size; i++){
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Error!" << std::endl;
    }
    delete[] array;
    return 0;
}