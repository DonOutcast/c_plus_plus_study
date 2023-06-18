// Напиши программу, которая рассчитывает передвижение шахматной фигуры «король». 
// Данная фигура ходит по горизонтали, вертикали или диагонали на одну клетку.
// Программа запрашивает четыре числа от 1 до 8 каждое.
// Первые два числа — задают координаты местонахождения короля в данный момент (номер строки и столбца), 
// Два других числа — координаты клетки, в которую необходимо переместить фигуру (гарантируется, что клетки не совпадают). 
// Программа должна вывести "Да", если из первой клетки ходом короля можно попасть во вторую, иначе — "Нет".
# include <stdio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int now_string = 0,now_columns = 0,new_string = 0,new_columns = 0;
    while (1)
    {
       scanf("%d%d%d%d",&now_string,&now_columns,&new_string,&new_columns);
       int string = abs(now_string - new_string);
       int columuns = abs(now_columns - new_columns);
       if (((now_string > 0&&now_string < 9)&&(now_columns > 0&&now_columns < 9)&&(new_string > 0&&new_string < 9)&&(new_columns > 0&&new_columns < 9)))
       {
        if ((string == 1 && columuns == 1)||(string == 0 && columuns == 1)||(string == 1 && columuns == 0)){
            printf("Да");
        }else {
            printf("Нет");
        }
       }
       else
       {
        printf("Введите числа с 1 до 8");
       }
       
       
    }
    
}