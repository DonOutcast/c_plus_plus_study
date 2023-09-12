#include <iostream>
#include <string>
class Builder{
    public:
        int wall;
        Builder(int w){
            wall = w;
        }
        Builder() {
            wall = 0;
        }
        int operator + (Builder build){
            return this -> wall + build.wall;
        }
        int operator - (Builder build){
            return this -> wall - build.wall;
        }
        Builder operator = (int build){
            return Builder(this -> wall = build);
        }
};
class Building: public Builder{
    private:
        std::string name;
    public:
        Building() {
            this->name = "";
            this->wall = 0;
        }
        Building(int w, std::string n) : Builder(w){
            name = n;
        }
        int operator + (Builder build){
            return this -> wall + build.wall;
        }
        int operator - (Builder build){
            return this -> wall - build.wall;
        }
        Builder operator = (int build){
            return Builder(this -> wall = build);
        }
        void display(){
            std::cout << "Name: " << name << std::endl;
            std::cout << this -> wall << std::endl;
        }
   
};
int main(){
    std::string n;
    std::cin >> n;
    Builder build_1(15);
    Builder build_2(30);
    Building test;
    int res = 0;
    res = build_1 - build_2;
    test = build_1 - build_2;
    test.display(); 

    return 0;
}