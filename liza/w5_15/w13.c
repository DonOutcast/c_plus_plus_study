#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    FILE *fp;
    char name[] = "name.txt";
    if ((fp = fopen(name, "r")) == NULL){
        printf("Не удалось открыть файл");
    } else {
        // fputc('n', fp);
        // fputc('\n', fp);
        // fputc('y', fp);
        // fputc('\n', fp);
        fputs("ccccc\n", fp);
        for (int i = 0; i < 4; i++){
            printf("%c", fgetc(fp));
        }
        fclose(fp);
    }
    return 0;
}

