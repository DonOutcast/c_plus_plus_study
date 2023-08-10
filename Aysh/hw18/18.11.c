#include <stdio.h>

struct Book {
    char title[20];
    char author[20];
    int price;
    int year;
};

int main() {
    struct Book array[5];
    int checkyear = 0;
    int count = 0;
    int sumprices = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter title,author,price and year of the book number %d\n",i+1);
        scanf("%s", &array[i].title);
        scanf("%s", &array[i].author);
        scanf("%d", &array[i].price);
        scanf("%d", &array[i].year);
    }
    printf("Enter year: ");
    scanf("%d", &checkyear);
    for (int i = 0; i < 5; i++) {
        if(array[i].year > checkyear) {
            count++;
            sumprices += array[i].price;
        }

    }
    printf("Count= %d\n", count);
    printf("Sumprices= %d\n", sumprices);
    return 0;
}