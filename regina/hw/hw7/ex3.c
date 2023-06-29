// 3.  Напишите программу, которая считает слонов. Программа должна запросит ввод n-количество слонов, затем вывести на экран в столбик:
// 1 слон
// 2 слон
// 3 слон
// …
// n слон
 
#include <stdio.h>
int main (){
    printf("enter a number of elephant:\n");
    int elephant = 1;
    scanf("%d", &elephant);
    for(int i = 1; i <= elephant; i++){
        printf("%d elephant\n", i);
    }
    return 0;
}