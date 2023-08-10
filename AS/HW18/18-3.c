// 3. Создайте структуру "Комплексное число", содержащую поля для действительной 
// и мнимой частей. Напишите функцию "сумма", которая принимает две структуры 
// "Комплексное число" в качестве параметров и возвращает их сумму в виде новой 
// структуры "Комплексное число".


#include <stdio.h>


struct Complex {
    int real;
    int imaginary;
};


struct Complex sum(struct Complex a, struct Complex b) {
    struct Complex result;

    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;

    return result;
}

int main() {
    
    struct Complex number1, number2;
    printf("Enter real part of the number 1: ");
    scanf("%d", &number1.real);
    printf("Enter imaginary part of the number 1: ");
    scanf("%d", &number1.imaginary);

    
    printf("Enter real part of the number 2: ");
    scanf("%d", &number2.real);
    printf("Enter imaginary part of the number 2: ");
    scanf("%d", &number2.imaginary);

    struct Complex result = sum(number1, number2);

    
    printf("the sum of complex number %d + %di\n", result.real, result.imaginary);

    return 0;
}
