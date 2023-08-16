#include <iostream>

int main()
{
   int line;
   std::cout << "ukazhite razmernost massiva\n";
   std:: cin >> line;
   std::cout << "vvedite znachenia\n";
   int *arr = new int[line];
   for(int i = 0; i < line; i++) {
     std::cin >> arr[i];
   }
   std::cout << "massive\n"; 
   for(int i = 0; i < line; i++) {
    std::cout << arr[i]<<" ";
   }
   delete[] arr;

    return 0;
}