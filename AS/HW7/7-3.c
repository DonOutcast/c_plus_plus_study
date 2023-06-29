//3.  Напишите программу, которая считает слонов. Программа должна запросит ввод 
//n-количество слонов, затем вывести на экран в столбик:
//1 слон
//2 слон
//3 слон
//…
//n слон

#include <stdio.h>
int main() {
int n = 0; //sloni

printf("Skolko slonov?\n");
scanf("%d", &n);

for (int i = 1; i <= n;  i++){
        printf("%d",i);
        printf (" slon\n");
    }
return 0;
}