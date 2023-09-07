/*Напишите программу с перегруженной функцией max(), функция может получать два параметра типа int или два
параметра типа double и должна возвращать наибольший из полученных параметров. 
Программа должна запрашивать ввод с клавиатуры двух целых значений.
Затем ввод с клавиатуры двух действительных значений (все значения вводятся в отдельных строках).
Проoграмма в отдельных строках должна вывести результат вызова функции max сначала с введенными целыми параметрами,
затем в новой строке  вывести результат вызова функции max с введенными действительными параметрами.*/
#include <iostream>
int max(int x,int y){
    int z;
    if (x > y){
        z = x;
    }else{
        z = y;
    }
    return z;   
}
double max(double x,double y){
    double z;
    if (x > y){
        z = x;
    }else{
        z = y;
    }
    return z;
}
int main(){
    int i_x,i_y;
    double d_x,d_y;
    std::cout <<"Enter int x and y: "<<std::endl;
    std::cin >> i_x >> i_y;
    std::cout <<"Enter double x and y: "<<std::endl;
    std::cin >> d_x >> d_y;
    std::cout << max(i_x,i_y) <<std::endl;
    std::cout << max(d_x,d_y) <<std::endl;
    return 0;
}