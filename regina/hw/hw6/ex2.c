// Напишите программу, которая запрашивает ввод чисел, пока сумма введенных четных чисел не станет больше 50, после чего выводит сумму всех введенных чисел и в следующей строке сумму введенных четных чисел.

#include <stdio.h>

int main() {
    int a = 0, result, even_numbers;   
    do {
        printf("Write numbers:\n");
        scanf("%d", &a);
        if(a % 2 == 0) {
            even_numbers = even_numbers + a;
        }
        result = result + a;
    } while(even_numbers < 50);
    printf("In total: %d\n", result);
    printf("Even numbers: %d\n", even_numbers);
return 0;
}



// #include <stdio.h>
// int main() {
//     int a, result;
//     do {
//         printf("Enter your number:\n");
//         scanf("%d", &a);
//         if (a % 2 == 0) {
//             result = result + a;
//         } else {
//             printf("Wrong number");
//         }
//     } while (result > 50);
//     printf("In total: %d\n", result);
// }