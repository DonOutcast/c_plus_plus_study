#include <stdio.h>

struct Book
{
    char title[20];
    char author[20];
    int year;
};

struct Book check(struct Book array[], struct Book checkyear,int size)
{
    printf("Enter checkyear:\n");
    scanf("%d", &checkyear.year);

    for(int i = 0; i < size; i++)
    {
        if(array[i].year == checkyear.year)
        {   
            printf("%s\n", array[i].author);
            printf("%s\n", array[i].title);
            
        }
    }
}
int main() {
    struct Book library[5];
    struct Book checkyear;

    for (int i = 0; i < 3; i++) {
        printf("Enter title,author and year of the book number %d\n", i+1);
        scanf("%s", &library[i].title);
        scanf("%s", &library[i].author);;
        scanf("%d", &library[i].year);
    }

    check(library,checkyear,3);

    return 0;
}