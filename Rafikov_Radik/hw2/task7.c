#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Russian");
    int side_A=0;
    int side_B=0;
    int side_C=0;
    scanf("%d %d %d",&side_A,&side_B,&side_C);
    if(side_A+side_B>side_C&&side_A+side_C>side_B&&side_B+side_C>side_A){
        printf("Треугольник существует.");
    }
    

}