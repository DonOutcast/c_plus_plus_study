#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>0&&y>0){printf("I");}
    if(x>0&&y<0){printf("II");}
    if(x<0&&y<0){printf("III");}
    if(x<0&&y>0){printf("IV");}

}