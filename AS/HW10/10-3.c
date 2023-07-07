//3.  Напишите программу, которая определяет расстояние между   двумя точками. 
//Программа должна запрашивать ввод координат точек x1,y1 и x2,y2 (значения координат вводятся с клавиатуры попарно, каждая пара координат в отдельной строке). Программа должна вывести на экран расстояние между точками (в формате 10 знакомест под все число и 2 знакоместа под дробную часть). Расчет расстояния оформите в виде функции.
//Для вычисления квадратного 
//корня подключите библиотеку #include <math.h> и используйте функцию sqrt().

#include <stdio.h>
#include <math.h>


float distance(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1;
    float dy = y2 - y1;
    float dist = sqrtf(dx*dx + dy*dy);
    return dist;
}

int main() {
    float x1, y1, x2, y2;
    
   
    printf("enter (x1, y1): \n");
    scanf("%f %f", &x1, &y1);
    
    printf("enter  (x2, y2): \n");
    scanf("%f %f", &x2, &y2);

    float dist = distance(x1, y1, x2, y2);
      
    printf("distance: %10.2f", dist);
    
    return 0;
}
