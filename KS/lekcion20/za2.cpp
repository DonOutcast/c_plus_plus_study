#include <iostream>


int main()
{
    int line1 = 3;
    int mline;
    std::cout << "vvedite znachenia massiva\n";
    int arr[line1];
    for(int i = 0; i < line1; i++) {
        std::cin >> arr[i];
    }
    int num = 0;
    for(int i = 0; i < line1; i++) {
        num++;
    }
    int *arr2 = new int[num];
    int j = 0;
    for(int i = 0; i < num; i++) {
        arr2[j++] = arr[i];
    }
    for(int i = 0; i < num; i++) {
        std:: cout << arr2[i] << " ";
    }
    std::cout << "\n";
    std::cout << "dobavte kolichestvo elementov\n";
    std::cin >> mline;
    std::cout << "dobavte znachenia\n";
    for(int i = line1; i < mline + line1; i++) {
        std::cin >> arr2[i];
    }
    for(int i = 0; i < mline + line1; i++)  {
        std::cout << arr2[i]<< " ";
    }
    delete[] arr2;

    return 0;
}