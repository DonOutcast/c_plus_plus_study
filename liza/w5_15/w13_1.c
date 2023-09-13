#include <stdio.h>
#include <math.h>
int main(){
    FILE *fp;
     fp = fopen("text.txt", "r");
    if (fp == NULL){
        printf("Have not file\n");
    } else {
        // int n;
        // scanf("%d", &n);
        // fputc(n, fp);
        printf("%f\n", pow(fgetc(fp), 2));
        fclose(fp);
    }
    return 0;
}