#include <stdio.h>
struct complex_number{
    float actual_part;
    float imaginary_part;
};
struct complex_number finding_the_amount(struct complex_number num_1, struct complex_number num_2){
    struct complex_number result;
    result.actual_part = num_1.actual_part + num_2.imaginary_part;
    result.imaginary_part = num_1.imaginary_part + num_2.imaginary_part;
    return result;
};
int main(){
    struct complex_number num_1;
    struct complex_number num_2;
    printf("First number\n");
    printf("Actual part: ");
    scanf("%f", &num_1.actual_part);
    printf("Imaginary part: ");
    scanf("%f", &num_1.imaginary_part);
    printf("\nSecond number\n");
    printf("Actual part: ");
    scanf("%f", &num_2.actual_part);
    printf("Imaginary part: ");
    scanf("%f", &num_2.imaginary_part);
    struct complex_number summa = finding_the_amount(num_1, num_2);
    printf("Sum of complex numbers: %f + %fi\n", summa.actual_part, summa.imaginary_part);
    return 0;
}
