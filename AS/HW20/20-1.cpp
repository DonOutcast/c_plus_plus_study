// Задача 1: Выделение памяти для одномерного массива
// Напишите программу, которая запрашивает у пользователя размер массива 
// (количество элементов) и затем динамически выделяет память для этого массива.
//  Заполните массив случайными числами и выведите 
// его на экран. После завершения работы с массивом, освободите выделенную память.

#include <iostream>

int main() {
    int size;
    std::cout << "Enter size of the array: ";
    std::cin >> size;

    
    int* array = new int[size];

    for (int i = 0; i < size; i++) {
    std::cout << "Enter elements of the array [" << i+1 << "]: ";
    std::cin >> array[i];
    }

    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

   
    delete[] array;

    return 0;
}
