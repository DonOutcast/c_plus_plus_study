/* Выделение памяти для одномерного массива
Напишите программу, которая запрашивает у пользователя размер массива (количество элементов) и затем динамически выделяет память для этого массива.
Заполните массив случайными числами и выведите его на экран. После завершения работы с массивом, освободите выделенную память. */
#include <iostream>
int main(){
    int size = 0;
    std::cout << "Enter size array: ";
    std::cin >> size;
    int *array;
    array = new int[size];
    for (int i = 0; i < size; i++){
        std::cout <<"array["<<i<<"]:";
        std::cin >>array[i];
    }
    for (int i = 0; i < size; i++){
        std::cout << array[i] <<" ";
    }
    delete[] array;
    return 0;
}