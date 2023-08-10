#include <stdio.h>
struct Square {
    int length;
    int width;
};

int square_result(struct Square square_res) {
   return square_res.length * square_res.width;
}
int main() {
    struct Square sq;
    printf("Enter length:\n");
    scanf("%d", &sq.length);
    printf("Enter width:\n");
    scanf("%d", &sq.width);
    printf("Square= %d\n",square_result(sq));
    return 0;
}