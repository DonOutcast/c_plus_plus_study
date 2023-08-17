#include <iostream>
int main() {
    int size_1 = 3;
    int size_2 = 0;
    int array_1[size_1];
    int *array_2;
    int *array_3;
    int k = 0;
        for(int i = 0;i < size_1;i++) {
            std::cout << "array_1["<< i <<"] = ";
            std::cin >> array_1[i];
        }
    std::cout <<"Enter size of the array bigger than our array:"<< std::endl;
    std::cin >> size_2;
    array_2 = new int[ size_2];
       for(int j = 0;j < size_2;j++) {
            std::cout << "array_2["<< j <<"] = ";
            std::cin >> array_2[j];
        }
    array_3 = new int[size_1+size_2];
    std::cout << "Final array: ";
    
    for( k = 0;k < size_1+size_2;k++) {
        array_3[k] = array_1[k];
        if(k>size_1 - 1) {
            array_3[k] = array_2[k-3];
        }
        std::cout << array_3[k] << " ";
        }
    std::cout << std::endl;
    delete[] array_2;
    delete[] array_3;
    return 0;
}

