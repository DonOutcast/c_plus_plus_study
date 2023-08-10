// Создайте структуру "Книга", содержащую поля для названия, автора и года издания.
//  Напишите функцию "вывестиАвторовПоГоду", которая принимает массив структур 
//  "Книга" и год в качестве
// параметров и выводит на экран всех авторов книг, изданных в указанном году.

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

void print (struct Book books[], int size, int year) {
    printf("Authors of the books, issued in %d :\n", year);
    for (int i = 0; i < size; i++) {
        if (books[i].year == year) {
            printf("%s\n", books[i].author);
        }
    }
}

int main() {
    struct Book books[3];

    for (int i = 0; i < 3; i++) {
        printf("Book name %d: ", i+1);
        scanf("%s", books[i].title);
        printf("Author %d: ", i+1);
        scanf("%s", books[i].author);
        printf("issue year %d: ", i+1);
        scanf("%d", &books[i].year);
    }

    int year;
    printf("Search year: ");
    scanf("%d", &year);

    print(books, 3, year);

    return 0;
}