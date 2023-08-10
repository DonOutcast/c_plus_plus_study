#include <stdio.h>
struct book{
    char title[20];
    char author[20];
    int cost;
    int year;
};
int main(){
    struct book info[5];
    int requested_year, count = 0, price = 0;
    printf("Books: \n");
    for (int i = 0; i < 5; i++){
        printf("Title: ");
        scanf("%s", &info[i].title);
        printf("Author: ");
        scanf("%s", &info[i].author);
        printf("Cost: ");
        scanf("%d", &info[i].cost);
        printf("Year: ");
        scanf("%d", &info[i].year);
        printf("\n");
    }
    printf("Year: ");
    scanf("%d", &requested_year);
    printf("Books released after %d: \n", requested_year);
    for (int i = 0; i < 5; i++){
        if (info[i].year > requested_year){
            count++;
            price += info[i].cost;
        }
    }
    printf("Count: %d   Price: %d\n", count, price);
    return 0;

}