#include <stdio.h>
int main()
{
char a;
printf("Nuzhen computer?:");
scanf("%c",&a);
if(a=='y') {
    printf("Nuzhen noutbuk?:");
    scanf("%c",&a);
    scanf("%c",&a);
     

    if(a=='y')
    {  
        printf("katalog noutbukov");
    }
         
    else 
    {
        printf("katalog desktopov");}
}
else {
printf("Do svidaniya\n");}


return 0;
}
