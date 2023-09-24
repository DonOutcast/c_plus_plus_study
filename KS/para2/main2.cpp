#include"para2.hpp"

int main()
{
    int a;
    int b;  
    std::cin >> a;
    std::cin >> b; 
    my::Chisla chisla(a,b);
    std::cout << chisla.Plus(a,b) <<"\n";
    std::cout << chisla.Minus(a,b) << "\n";
    std::cout << chisla.Ymnozhit(a,b) << "\n";
    std::cout << chisla.Delit(a,b) << "\n";

    
    return 0;
}