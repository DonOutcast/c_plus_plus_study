#include<iostream>
#include<string>
#include<stdlib.h>

int main()
{
   
    std::string c = "1234567890";
    std::string x = "!@#$%^&*()<>,.";
    std::string username;
    std::cin >> username;
    int flag = 1;

    try
    {
        for(int i = 0; i < x.size(); i++)
        {
            if(username.find(x[i]) != -1)
            {
                flag = 0;
                throw "moshet sodergat tolko bukvi and cifri";
            }
        }
        for(int i = 0; i < c.size(); i++)
        {
            if(username.find(c[i]) == 0)
            {
                flag = 0;
                throw "ne nachinaite c cifri\n";
            }
        }
    } 
    catch(const char *exc1)
    {
        std:: cout << exc1;
    }
    if(flag != 0)
    {
        std::cout << "ok";
    }

    return 0;

}