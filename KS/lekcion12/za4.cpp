#include <stdio.h>

int func(int number)
{
    int n = 1;
  if(number == n) {
    return 1;
  }
  else {
    if(number % 2 == 0) {
        return number + func(number - 1);
    }
    else if(number > 1 && number %2 != 0) {
        return 2 * func(number -2);
    }
  }

}

int main()
{
    int number;
    scanf("%d", &number);
    printf("%d", func(number));
   
    return 0;
}