// 1. Используя оператор for напишите программу, которая запрашивает ввод целого числа n и n-раз выводит слово “programming” в столбик.
//1
// #include <stdio.h>

// int main() {
//     int a = 1;
//     printf("Enter a number:\n");
//     scanf("%d", &a);
//     for(int b = 0;  b < a; b++) {
//         printf("programming\n");
//     }
// return 0;
// }


//2. Напишите программу, которая выводит в столбик степени числа 2 (с 1 до 5).

#include <stdio.h>
#include <math.h>

// int main() {
//     float a = 2;
//     for(int b = 1; b < 6; b++) {
//         a = pow(a, b);
//         printf("%f\n", a);
//     }
//     return 0;
// }

// Напишите программу, которая запрашивает ввод n и выводит n! (n факториал)
// int main(){
//     int a = 1;
//     printf("Enter number:\n");
//     scanf("%d", a);
//     for (int b; b = a; b++){
//         a += b;
//         printf("%d", a);
//     }
//     return 0;
// }

// Используя оператор for напишите программу, которая запрашивает ввод целого числа n и выводит в столбик все чётные числа от 0 до n (включительно).

// #include <stdio.h>
// int main(){
//     int a, b;
//     printf("Enter a number:\n");
//     scanf("%d", &a);
//     for(b = 2; b <= a; b++)
//      {
//           if(a % b == 0)
//           {
//                printf("%d\n", b);
//           }
//      }
// return 0;
// }