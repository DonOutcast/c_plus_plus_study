// 1. Создайте структуру "Студент", содержащую поля для имени, возраста и средней оценки.
//  Напишите функцию "вывестиИнформацию", которая принимает структуру "Студент" в 
//  качестве параметра и выводит на экран все ее поля.


#include <stdio.h>


struct Student {
    char name[50];
    int age;
    float grade;
};


void print_info(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Average grade: %.2f\n", student.grade);
}

int main() {
     struct Student student;

    printf("student name: ");
    scanf("%s", student.name);
    printf("student age: ");
    scanf("%d", &student.age);
    printf("student average grade: ");
    scanf("%f", &student.grade);

    
    printf("Student information:\n");
    print_info(student);

    return 0;
}