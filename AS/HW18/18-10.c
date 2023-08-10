// Создайте структуру для хранения информации о студенте (имя, фамилия, номер класса).
//  Создайте массив из пяти таких структур, ввод данных запросите с клавиатуры. 
//  Программа должна запрашивать ввод класса и выводить в столбик с новой строки фамилии
//   учащихся запрашиваемого класса.

#include <stdio.h>

struct Student {
    char first_name[20];
    char last_name[20];
    int class_number;
};

int main() {
    struct Student students[5];
    int requested_class;


    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("First name: ");
        scanf("%s", students[i].first_name);
        printf("Last name: ");
        scanf("%s", students[i].last_name);
        printf("Class number: ");
        scanf("%d", &students[i].class_number);
    }

    printf("Enter the requested class number: ");
    scanf("%d", &requested_class);

    printf("Students in class %d:\n", requested_class);

    for (int i = 0; i < 5; i++) {
        if (students[i].class_number == requested_class) {
            printf("%s\n", students[i].last_name);
        }
    }

    return 0;
}
