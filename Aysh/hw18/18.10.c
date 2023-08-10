#include <stdio.h>

struct Students {
    char firstname[20];
    char lastname[20];
    int classnum;
};

int main() {
    struct Students array[5];
    int checkclass=0;
    for (int i = 0; i < 5; i++) {
        printf("Enter firstname,lastname and classnumber of the student number %d:\n",i+1);
        scanf("%s", &array[i].firstname);
        scanf("%s", &array[i].lastname);
        scanf("%d", &array[i].classnum);
    }
    
    printf("Enter classnum:");
    scanf("%d", &checkclass);
    for (int i = 0; i < 5; i++) {
        if(checkclass == array[i].classnum) {
            printf("%s\n" ,array[i].lastname);
        }
           }
    return 0;
}