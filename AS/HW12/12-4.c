// Напишите программу для вычисления значения функции F(n), где n — 
// натуральное число, задана следующими соотношениями: 
// F(n) = 1 при n = 1; 
// F(n) = n + F(n − 1), если n чётно, 

#include <stdio.h>

int F(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        return n + F(n - 1);
    }
    else {
        return 0; ///?
    }
}
int main() {
    int n, result;
    
    printf("n: ");
    scanf("%d", &n);
    
    result = F(n);

    if (result != 0) {
    printf("F(n) = %d\n", result);}
    else {printf("Error \n");}
    
    return 0;
}
