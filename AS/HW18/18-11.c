// Создайте структуру для хранения данных о книге (Название, Автор, цена, год издания).
//  Создайте массив из пяти таких структур, ввод данных запросите с клавиатуры. 
//  Программа должна запрашивать год издания и выводить в отдельных строках 
// количество книг, выпущенных после указанного года, и их стоимость (сумму цен).

#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
    int year;
};

int main() {
    struct Book books[5];
    int Year;
    int Count = 0;
    float totalPrice = 0.0;

    printf("Enter the info for 5 books:\n");

    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i+ 1);
        printf("Book title: ");
        scanf("%s", books[i].title);
        printf("Book author: ");
        scanf("%s", books[i].author);
        printf("Book price: ");
        scanf("%f", &books[i].price);
        printf("issue year: ");
        scanf("%d", &books[i].year);
    }

    printf("Enter the book issue year you want to find: ");
    scanf("%d", &Year);

    for (int i = 0; i < 5; i++) {
        if (books[i].year > Year) {
            Count++;
            totalPrice += books[i].price;
        }
    }

    printf("Number of the books issued after %d : %d\n", Year, Count);
    printf("Total price of the books: %.2f\n", totalPrice);

    return 0;
}
