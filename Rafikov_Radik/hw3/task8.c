// Напиши программу, которая определяет окрашены ли выбранные клетки доски в один цвет или в разные.
// Программа запрашивает четыре числа от 1 до 8 каждое.
// Первые два числа — задают координаты первой клетки (номер строки и столбца),
// вторые — координаты второй клетки (гарантируется, что клетки не совпадают).
// Программа должна вывести "Да", если выбранные клетки одинакового цвета, иначе — "Нет"
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL,"Russian");
    int now_string = 0,now_columns = 0,new_string = 0,new_columns = 0;
    while (1)
    {
       scanf("%d%d%d%d",&now_string,&now_columns,&new_string,&new_columns);
       if (((now_string > 0&&now_string < 9)&&(now_columns > 0&&now_columns < 9)&&(new_string > 0&&new_string < 9)&&(new_columns > 0&&new_columns < 9)))
       {
        if (now_string + now_columns + new_string + new_columns % 2 == 0){
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