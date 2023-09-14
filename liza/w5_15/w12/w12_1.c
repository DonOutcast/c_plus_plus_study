#include <stdio.h>
int sum(int number){
    printf("%d\n", number);
    if (number == 0){
        return 1;
    } else {
        return sum(number - 1) * number;
    }
}
int main(){
    printf("%d\n", sum(4));
    return 0;
}