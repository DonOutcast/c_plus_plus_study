#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
};

struct Complex sum(struct Complex number_1,struct Complex number_2) {
    struct Complex sum_result;
    sum_result.real = number_1.real + number_2.real;
    sum_result.imaginary = number_1.imaginary + number_2.imaginary;
    return sum_result;
}

int main () {
    struct Complex a;
    struct Complex b;
    printf("Enter real and imaginary part of the number 1:\n");
    scanf("%d", &a.real);
    scanf("%d", &a.imaginary);
    printf("Enter real and imaginary part of the number 2:\n");
    scanf("%d", &b.real);
    scanf("%d", &b.imaginary);
    struct Complex new_sum = sum(a,b);
    printf("Result real= %d\n",new_sum.real);
    printf("Result imaginary= %d\n",new_sum.imaginary);


    return 0;
}