// #include <stdio.h>
// #include <locale.h>

// int main() {
    
//     printf("Hello");
//     return 0;
// }


     // ex.1
// int main() {
//     setlocale(LC_ALL, "RU");
//     printf("- Когда я добрался до них, мы вступили в агрессивные переговоры.\n- Агрессивные переговоры? Это как?\n- Это переговоры на световых мечах.");
//      return 0;
// }

//     //ex.2
// int main() {
//      int laptop_price = 30000, chair_price = 15000, printer_price = 9750, paper_price = 345;
//      float discount = 0.95, price;
//     price = (laptop_price + chair_price + printer_price + paper_price * 5) * discount;
// printf("%10.2f", price);
// } //округление?

// int main() {
//      int laptop_price = 30000, chair_price = 15000, printer_price = 9750, paper_price = 345, price, final_price;
//      int discount = 5;
//     price = (laptop_price + chair_price + printer_price + paper_price * 5);
//     final_price = price * discount / 100 * price;
// printf("%d", final_price);
// } //округление

// int main() {
//      int laptop_price = 30000, chair_price = 15000, printer_price = 9750, paper_price = 345, price, final_price;
//      int discount = 5;
//     price = (laptop_price + chair_price + printer_price + paper_price * 5)*0.95;
//     final_price = price * discount / 100 * price;
// printf("%d", final_price);
// }


// //ex.3
// int main() {
//     int a = 121, b = 11, c;
//     c = a + b;
//     printf("%d", c);
// }



// 15.06.2023 LESSON 3
#include <stdio.h>

int main() {
    printf("Do you need a computer?");
    char computer;
    scanf("%c", &computer);
    if (computer == 'y') {
        scanf("%c", &computer);
        printf("Do you need a laptop?\n");
        if (computer == 'y') {
            printf("Laptop prices: \n 1 \n 2 \n ...");
        }
        else {
        printf("Computer price: \n 1 \n 2 \n ...");
            }
    } else {
        printf("Good bye!");
    }
    return 0;
}