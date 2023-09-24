#include<iostream>

namespace my
{
    class Chisla
    {
        public:
        int a;
        int b;
        
        Chisla(int a_p, int b_p)
        {
            a = a_p;
            b = b_p; 
        }
    
        int Plus(int a, int b);
        int Minus(int a, int b);
        int Ymnozhit(int a, int b);
        float Delit(int a, int b); 
        
        ~Chisla(){;}
    };
}