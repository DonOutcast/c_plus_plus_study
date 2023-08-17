#include <iostream>

int main()
{
    int line;
    int weid;
    std::cout << "vvedite razmernost dvymernogo massiva\n";
    std::cin >> line;
    std::cin >> weid;
    std::cout << "vvedite znachenin\n";
    int **arr = new int*[line];
    for(int i = 0; i < line; i++) {
        arr[i] = new int[weid];
        for(int j = 0; j < weid; j++) {
            std::cin >> arr[i][j];
        }
    }
    std::cout << "matrica\n";
    for(int i = 0; i < line; i++) {
        for(int j = 0; j < weid; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout <<"\n";
    }
    for(int i = 0; i < line; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}