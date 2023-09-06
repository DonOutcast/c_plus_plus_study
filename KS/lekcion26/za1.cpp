#include<iostream>
#include<string>

std::string show_message(std::string a)
{
    return a;
}
std::string show_message(std::string a, std::string b)
{
    return a+" "+b;
}
std::string show_message(std::string a, std::string b, std::string c)
{
    return a+" "+b+" "+c;
}
int main()
{
    std::string a;
    std::string b;
    std::string c;
    getline(std::cin,a);
    getline(std::cin,b);
    getline(std::cin,c);

    std::cout << show_message(a);
    std::cout <<"\n";
    std::cout << show_message(a,b);
    std::cout <<"\n";
    std::cout << show_message(a,b,c);

    return 0;
}