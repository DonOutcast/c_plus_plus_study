// —оздайте структуру " нига", содержащую пол€ дл€ названи€, автора и года издани€. Ќапишите функцию "вывестијвторовѕо√оду",
// котора€ принимает массив структур " нига" и год в качестве параметров и выводит на экран всех авторов книг, изданных в указанном году.
#include <stdio.h>
struct Book{
    char name[20];
    char author[20];
    int year_of_publication;
};
struct Book name_autor(struct Book info[],int year_book){
    
    for (int i = 0; i < 3; i++){
        if (info[i].year_of_publication == year_book){
            printf("%s ",info[i].name);
        }  
    }
}     



int main(){
    char x = 0;
    struct Book info[3];
    for (int i = 0; i < 3; i++){
        printf("Enter info book %d\n",i+1);
        printf("Enter Name: ");
        scanf("%s", &info[i].name);
        printf("Enter Author: "); 
        scanf("%s", &info[i].author);
        printf("Enter year of publication: ");
        scanf("%d", &info[i].year_of_publication);
    }
    int year_book = 0;
    printf("What year: ");
    scanf("%d",&year_book);
    name_autor(info,year_book);
    return 0 ;
}