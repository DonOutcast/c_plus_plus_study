#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp;
    fp = fopen("text.txt", "w");
    if (fp == NULL) {
        printf("No have file\n");
    } else {
        char login[15], password[15];
        ("Registration\n");
        printf("Login: ");
        scanf("%s", login);
        printf("Password: ");
        scanf("%s", password);
        fputs(login, fp);
        fputs("\n", fp);
        fputs(password, fp);
        fclose(fp);
        printf("Registration is completed\n");
    }

    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("No have file\n");
    } else {
        while (1){
            char login_input[15], password_input[15];
            printf("Login: ");
            scanf("%s", login_input);
            printf("Password: ");
            scanf("%s", password_input);
            char file_login[15], file_password[15];
            fgets(file_login, 15, fp);
            fgets(file_password, 15, fp);
            if (strcmp(login_input, file_login) && strcmp(password_input, file_password)){
                printf("Incorrect login or password. Please try again.\n");
            } else {
                printf ("Login successful!\n");
                break;
            }
        }
        fclose(fp);
    
    }
    return 0;

}

