// Увеличение размера массива
// Напишите программу, которая создает массив фиксированного размера и заполняет его 
// значениями. Затем попросите пользователя ввести новый размер массива, больший 
// текущего. С использованием оператора new[], увеличьте размер массива и заполните
//  новые элементы случайными значениями. 
// После завершения работы с массивом, освободите выделенную память.

#include <iostream>

int* New_array(int* array, int size, int new_size) {
int* new_array = new int[new_size];
    
for (int i = 0; i < size; i++) {
    new_array[i] = array[i];
    }

for (int i = size; i < new_size; i++) {
    std::cout << "Enter element " << i+1 << ": ";
    std::cin >> new_array[i];
    }
    
delete[] array;
return new_array;
}

int main() {
int size;
std::cout << "Enter size of the array: ";
std::cin >> size;
    
int* array = new int[size];
    
for (int i = 0; i < size; i++) {
    std::cout << "Enter element  " << i+1 << ": ";
    std::cin >> array[i];
    }
    
    int new_size;
    std::cout << "Enter new size of the array: ";
    std::cin >> new_size;
    
    if (new_size > size) {
        array = New_array(array, size, new_size);
        size = new_size;
    } else {
        std::cout << "New size should be longer than the first one." << std::endl;
    }
    
    std::cout << "Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    delete[] array;
    
    return 0;
}