#include <stdio.h>
int simple_or_compound(int n){
    if (n <= 1){
        return 0;
    } else {
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                return 0;
            }
        }
    } 
    return 1;
}
int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    if (simple_or_compound(n)){
        printf("+\n");
    } else {
        printf("-");
    }
    return 0;
}