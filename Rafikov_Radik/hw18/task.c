// Создайте структуру "Студент", содержащую поля для имени, возраста и средней оценки. Напишите функцию "вывестиИнформацию", 
// которая принимает структуру "Студент" в качестве параметра и выводит на экран все ее поля. 
#include <stdio.h>
struct Stydent{
    char name[10];
    int age;
    int average_rating;
};
struct Stydent EnterName(struct Stydent info){
    printf("Enter name: ");
    scanf("%s",&info.name);
    printf("Enter age: ");
    scanf("%d",&info.age);
    printf("Enter average reting: ");
    scanf("%d",&info.average_rating);
    return info;
}
struct Stydent Print(struct Stydent info){
    printf("Name: %s\n",info.name);
    printf("Age: %d\n",info.age);
    printf("Average rating: %d",info.average_rating);
}

int main (){
    struct Stydent info;
    struct Stydent radik = EnterName(info);
    printf("information about the student\n");
    Print(radik);


    return 0 ;
}