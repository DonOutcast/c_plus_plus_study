#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    if (N>=0){
        if (N == 0){
            printf("%d bochek", N);
        } else if (N % 10 == 1 && N % 100 != 11){
            printf("%d bochka", N);
        } else if (N % 10 >= 2 && N % 10 <= 4 && (N % 100 < 10 || N % 100 > 20)){
            printf("%d bochki", N);
        } else {
            printf("%d bochek", N);
        }
    }
    return 0;
}
/*2
2 bochki*/
/*35
35 bochek*/
/*51
51 bochka*/
