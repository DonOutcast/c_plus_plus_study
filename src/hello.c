#include<stdio.h>
#include<locale.h>

int main()
{
   setlocale(LC_ALL, "Russian");
    printf(" Enter");
    char useranswer;
    scanf("%c", &useranswer);
    if(useranswer == 'y')
    {
        printf("Kirill\n");


    } else
    {
        printf("no\n");



    } 

    return 0;


}