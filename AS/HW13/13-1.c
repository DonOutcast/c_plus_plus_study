#include <stdio.h>
#include <string.h>



int main() {
    char login[30];
    char password[30];

    
    FILE *fp = fopen("key.txt", "w");
    if (fp == NULL) {
        printf("file error");
        return 1;
    }

    printf("set up log and pass: \n");
    printf("login: ");
    fgets(login, sizeof(login), stdin);
    fprintf(fp, "%s", login);

    printf("password: ");
    fgets(password, sizeof(password), stdin);
    fprintf(fp, "%s", password);

    fclose(fp);
    printf("success \n");

    
    printf("enter login and password\n");
    fp = fopen("key.txt", "r");
    if (fp == NULL) {
        printf("file error\n");
        return 1;
    }

    int match = 0;
    while (!match) {
        char inputLogin[30];
        char inputPassword[30];
        printf("login: ");
        fgets(inputLogin, sizeof(inputLogin), stdin);

        printf("password: ");
        fgets(inputPassword, sizeof(inputPassword), stdin);

        inputLogin[strcspn(inputLogin, "\n")] = '0';
        inputPassword[strcspn(inputPassword, "\n")] = '0';

        char fileLogin[30];
        char filePassword[30];
        fseek(fp, 0, SEEK_SET);
        fgets(fileLogin, sizeof(fileLogin), fp);
        fgets(filePassword, sizeof(filePassword), fp);

        
        fileLogin[strcspn(fileLogin, "\n")] = '0';
        filePassword[strcspn(filePassword, "\n")] = '0';

        if (strcmp(inputLogin, fileLogin) == 0 && strcmp(inputPassword, filePassword) == 0) {
            match = 1;
            printf("success \n");
        } else {
            printf("error \n");
        }
    }

    fclose(fp);

    return 0;
}

