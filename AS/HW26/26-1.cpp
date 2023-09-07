// На c++ Напишите программу с перегруженной функцией show_message(), функция может 
// получать один, два или три строковых параметра. Если параметр один- выводится 
// полученный строковый параметр, если параметра два- выводится конкатенация строк 
// разделенных пробелом (строки склеиваются, две строки через пробел), если параметра
//  три- выводится конкатенация строк разделенных пробелом (строки склеиваются, три
//   строки через пробел). 
// Программа должна запрашивать три строковых значения (s1,s2,s3) и выводить в 
// отдельных строках результат вызова функции show_message(s1), show_message(s1,s2),
//  show_message(s1, s2, s3).
// Пример работы программы:
// Входные данные:
// Мама
// мыла
// раму
// Выходные данные:
// Мама
// Мама мыла
// Мама мыла раму

#include <iostream>
#include <string>

void show_message(const std::string &s1, const std::string &s2 = "", const std::string &s3 = "") {
    if (!s3.empty()) {
        std::cout << s1 << " " << s2 << " " << s3 << std::endl;
    } else if (!s2.empty()) {
        std::cout << s1 << " " << s2 << std::endl;
    } else {
        std::cout << s1 << std::endl;
    }
}

int main() {
    std::string s1, s2, s3;
    std::cout << "Enter the first line: ";
    std::getline(std::cin, s1);
    std::cout << "Enter the second line: ";
    std::getline(std::cin, s2);
    std::cout << "Enter the third line: ";
    std::getline(std::cin, s3);

    show_message(s1);
    show_message(s1, s2);
    show_message(s1, s2, s3);

    return 0;
}