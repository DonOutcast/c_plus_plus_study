 #include <stdio.h>
 #include <math.h>

double func(int x1, int y1, int x2, int y2)  {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
}
int main()
{
    int x1, y1, x2, y2;
   
    printf("vvedite koordinaty pervoi tichki x and y\n ");
    scanf("%d", &x1);
    scanf("%d", &y1);
    printf("vvedite koordinaty vtoroi tichki x and y\n ");
    scanf("%d", &x2);
    scanf("%d", &y2);
  
    printf("%10.3g", func(x1,y1,x2,y2));

    return 0;
}