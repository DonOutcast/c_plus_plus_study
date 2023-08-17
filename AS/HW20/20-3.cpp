// Задача 3: Создание двумерного массива
// Напишите программу, которая запрашивает у пользователя количество строк и 
// столбцов для двумерного массива. С использованием оператора new, выделите память 
// для двумерного массива и заполните его случайными числами. Выведите содержимое 
// массива на экран. После завершения работы с массивом, освободите выделенную память.

#include <iostream>

int main() {
    int rows, columns;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> columns;

    int** array = new int*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    std::cout << "array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}