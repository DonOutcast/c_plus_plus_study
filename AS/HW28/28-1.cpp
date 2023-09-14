// C++ Напиши программу для проверки корректности введенного username пользователя. Считай с клавиатуры одну строку - username. username может состоять из букв и цифр, но не должен начинаться на цифру. Для проверки корректности добавь собственные исключения:
// WrongCharacterError - если username состоит не только из букв и цифр.
// FirstCharacterError - если username начинается с цифры.

// Если username некорректный, то с помощью вызова исключений WrongCharacterError или FirstCharacterError выведи на экран текст «username может содержать только буквы и цифры» или «username не может начинаться с цифры». Сначала проверяется условие WrongCharacterError, если оба условия ложны, то выводится одно сообщение -  «username может содержать только буквы и цифры». Если username корректный, то выведи сообщение «OK».

// При написании кода программы используй обработку исключений. Создай собственные исключения WrongCharacterError и FirstCharacterError.

// Входные данные:
// Вводится строка - username.

// Выходные данные:
// Выводится сообщение «username не может начинаться с цифры», «username может содержать только буквы и цифры» или «OK».

// Пример ввода:
// 1Us@r

// Пример вывода:
// username может содержать только буквы и цифры

#include <iostream>
#include <string>

class WrongCharacterError : public std::exception {
public:
    const char* what() const throw() {
        return "username can include only numbers and digits";
    }
};

class FirstCharacterError : public std::exception {
public:
    const char* what() const throw() {
        return "username cant be started from the number";
    }
};

int main() {
    std::cout << "Enter username:";
    std::string username;
    std::cin >> username;

    if (username[0] >= '0' && username[0] <= '9') {
        throw FirstCharacterError();
    }

    for (char c : username) {
        if (!(c >= 'a' && c <= 'z') &&!(c >= 'A' && c <= 'Z') &&!(c >= '0' && c <= '9')) {
            throw WrongCharacterError();
        }
    }

    std::cout << "OK" << std::endl;

    return 0;
}