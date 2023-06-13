#include <stdio.h>
#include <locale.h>

int main() {
    printf("Enter any number");
    int user_answer = 0;
    scanf("%d", &user_answer);
    if (user_answer == 10) {
        printf("10\n");
    } else {
        printf("!\n");
    }
}
