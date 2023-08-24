/* Напишите программу, которая будет переводить рубли в другую валюту.
Программа должна запрашивать сумму в рублях и тип валюты (в отдельных строка, тип валюты - целое число от 1-3),
опишите класс и создайте внутри класса три статических поля для хранения трех курсов валюты,
также метод для перевода из рублей в валюту по выбранному курсу,
метод должен получать в качестве параметров сумму в рублях и тип курса,
возвращать сумму в соответствующей валюте. Инициализируйте их значениями курс 1= 60.5, курс 2= 35.8, курс 3=0.85.
Результат выведите с точностью 2 знака после запятой.

Пример работы программы:
Введите сумму в рублях:100
Введите тип валюты (1-3):3
117.65 */
#include <iostream>

class Currency_translator{
private:
    double count;
    double dollar = 60.5;
    double euro = 35.8;
    double yuan = 0.85;
public:
    void get();
    void translator_and_print();
};
int main(){
    Currency_translator info;
    info.get();
    info.translator_and_print();
    return 0;
}
void Currency_translator::get(){
    std::cout <<"Enter count rubles: ";
    std::cin >>count;
}
void Currency_translator::translator_and_print(){
    int enter;
    std::cout <<"What currency do you need to transfer to?"<<std::endl;
    std::cout <<"Enter 1 of dollar  2 of euro  3 of yuan: ";
    std::cin >> enter;
    if (enter = 1){
        std::cout << count * dollar<<std::endl; 
    }else if (enter == 2){
        std::cout << count * euro<<std::endl;
    }else if (enter ==3){
        std::cout << count * yuan<<std::endl;
    }else{
        std::cout <<"Error"<<std::endl;
    }
}

