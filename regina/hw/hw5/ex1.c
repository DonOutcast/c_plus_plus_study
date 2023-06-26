// Напиши программу, которая задает вопрос “Кто является автором языка C++? 1. Джеймс Гослинг 2. Бьёрн Страуструп 3. Деннис Ритчи”, пользователь вводит номер ответа, программа в случае верного ответа выводит “Верно”, в случае неверного ответа выводит “Ошибка”, в случае неверного ввода программа должна вывести “Error”.

#include <stdio.h>
int main() {
    printf("Who is the author of the C++ language?\n 1.James Gosling \n 2.Bjarne Stroustrup \n 3.Dennis Ritchie \n");
    int answer;
    scanf("%d", &answer);
    switch(answer) {
        case 2: printf("Right");break;
        default: printf("Wrong");
    }
return 0;
}