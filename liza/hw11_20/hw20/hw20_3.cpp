#include <iostream>
int main(){
    int rows, columns;
    std::cout << "Rows: ";
    std::cin >> rows;
    std::cout << "Columns: ";
    std::cin >> columns;
    int **array = new int*[rows];
    for (int i = 0; i < rows; i++){
        array[i] = new int[columns];
        for (int j = 0; j < columns; j++){
            std::cout << "Array[" << i << "][" << j << "] = ";
            std::cin >> array[i][j];
        }
        
    }
    std::cout << "Array: " << std::endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << array[i][j];
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < rows; i++){
        delete[] array[i];
    }
    delete[] array;
    return 0; 
}