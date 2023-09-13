#include <stdio.h>
struct Student{
    char name[15];
    int age;
    float average_mark;
};
void output_information(struct Student student){
    printf("Student's name: %s\n", student.name);
    printf("Student's age: %d\n", student.age);
    printf("Student's average grade: %.2f\n", student.average_mark);
}
int main(){
    struct Student student;
    printf("Student's name: ");
    scanf("%s", &student.name);
    printf("Student's age: ");
    scanf("%d", &student.age);
    printf("Student's average grade: ");
    scanf("%f", &student.average_mark);
    printf("\n");
    output_information(student);
    return 0;

}