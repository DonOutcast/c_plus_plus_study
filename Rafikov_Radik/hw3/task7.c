//Напиши программу, которая рассчитывает передвижение шахматной фигуры  «конь».
// Данная фигура ходит буквой «Г», т.е. две клетки по вертикали в любую из сторон, затем 1 клетку по горизонтали и наоборот.
// Программа запрашивает четыре числа от 1 до 8 каждое.
// Первые два числа — задают координаты местонахождения коня в данный момент (номер строки и столбца),
// два других числа — координаты клетки, в которую необходимо переместить фигуру (гарантируется, что клетки не совпадают).
// Программа должна вывести "Да", если из первой клетки ходом коня можно попасть во вторую, иначе — "Нет".
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
        if (string * columuns == 2){
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