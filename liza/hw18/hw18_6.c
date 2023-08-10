#include <stdio.h>
struct book {
    char author[20];
    char title[20];
    int year;
};
void output_athors_by_year(struct book info[], int size, int year){
    printf("Authors of books published in %d: \n", year);
    for (int i = 0; i < size; i++){
        if (info[i].year == year){
            printf("%s\n", info[i].author);
        }
    }
}
int main(){
    int size, year;
    printf("Size of array: ");
    scanf("%d", &size);
    struct book info[size];
    for (int i = 0; i < size; i++){
        printf("Author: ");
        scanf("%s", &info[i].author);
        printf("Title: ");
        scanf("%s", &info[i].title);
        printf("Year: ");
        scanf("%d", &info[i].year);
        printf("\n");
    }
    printf("\nYear: ");
    scanf("%d", &year);
    output_athors_by_year(info, size, year);
    return 0;

}