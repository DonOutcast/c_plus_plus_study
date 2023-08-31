#include <iostream>
class Average{
    private:
        double m_value;
        int count;
    public:
        Average(){
            m_value = 0;
            count = 0;
        }
        void add(int value);
        double get_value();
        friend void reset(Average &average);
        ~Average(){;}
};
void reset(Average &average){
    average.m_value = 0;
    average.count = 0;
}
int main(){
    Average average;
    average.add(5);
    average.add(10);
    std::cout << "Result: " << average.get_value() << std::endl;
    reset(average);
    average.add(2);
    average.add(3);
    std::cout << "Result: " << average.get_value() << std::endl;
}
void Average::add(int value){
    this -> m_value += value;
    this -> count++;
}
double Average::get_value(){
    return m_value / count;
}