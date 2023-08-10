#include <stdio.h>
struct Student {
    char name[20];
    int age;
    int average;
};

void printing(struct Student printinfo) {
    printf("Name= %s\n",printinfo.name);
    printf("Age= %d\n",printinfo.age);
    printf("Average= %d\n",printinfo.average);
    
}
int main() {
    struct Student pr;
    printf("Enter name,age and average:\n");
    scanf("%s", &pr.name);
    scanf("%d", &pr.age);
    scanf("%d", &pr.average);
    printing(pr);
    return 0;
}