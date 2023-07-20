#include <stdio.h>
#include <string.h>
int main() {

    FILE *fp;
    char reglogin[30];
    char regpass[30];
    char userlogin[30];
    char userpass[30];
    fp = fopen("logpass.txt", "w");
    if (fp == NULL) {
        printf("No have file\n");
    } 
    else {
       
        printf("Please register!\n");
        printf("Login?:");
        scanf("%s",&reglogin);
        printf("Pass?:");
        scanf("%s",&regpass);
        fputs(reglogin, fp);
        fputs("\n", fp);
        fputs(regpass, fp);
        fclose(fp);
        printf("Registration is finished!\n");
    }


    fp = fopen("logpass.txt", "r");
    if (fp == NULL) {
        printf("No have file\n");
    } 
    else {
        char login[30];
        char pass[30];
        fgets(login,30,fp);
        fgets(pass,30,fp);
         do
          {
           printf("Enter login and pass:\n");
           scanf("%s", &userlogin);
           scanf("%s", &userpass);
          }
          while(strcmp(login,userlogin)!=0 && strcmp(pass,userpass)!=0);
          
          printf("You entered in!\n");
    }
    fclose(fp);
    return 0;
    }