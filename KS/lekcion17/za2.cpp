#include <stdio.h>
#include <stdlib.h>

struct time
{
     int hour;
     int minute;
     int second;
     int dopminute;
};

int main()
{
     struct time var;
     
     printf(" vvedite time\n");
     printf("vvedite hour\n");
     scanf("%d", &var.hour);
     while(var.hour> 23)   {
        printf("ne dolzno bit bolshe  23\n");
        scanf("%d", &var.hour);
     }
     printf("vvedite minutes\n");
     scanf("%d", &var.minute);
     while(var.minute > 59)   {
        printf("ne dolzno bit bolshe 60\n");
        scanf("%d", &var.minute);
     }
     printf("vvedite seconds\n");
     scanf("%d", &var.second);
     while (var.second > 59)  {
        printf("ne dolzno bit bolshe 60\n");
        scanf("%d", &var.second);
     }
     if(var.hour < 10)   {
       printf("0%d:", var.hour);
     }
     else{
     printf("%d:", var.hour);
     }
     if(var.minute < 10)  {
        printf("0%d:", var.minute);
     }
     else{
     printf("%d:", var.minute);
     }
     if(var.second< 10)   {
        printf("0%d", var.second);
     }
     else
     {
     printf("%d", var.second);
     }
    printf("\n");
    int dopminute;
    printf("scolco dobavit minutes?\n");
    scanf("%d", &var.dopminute);
    
    var.dopminute += var.minute;
    
    if(var.dopminute > 59)  {
         var.dopminute = var.dopminute-60;
         var.hour++;
    }
    if(var.hour > 23) {
    var.hour = 0;
    printf("0%d:", var.hour);
    }
    else {
    if(var.hour < 10)  {
    printf("0%d:", var.hour);
    }
    else   {
    printf("%d:", var.hour);
    }
    }
    if(var.dopminute < 10)  {
    printf("0%d:", var.dopminute);
    }
    else  {
    printf("%d:", var.dopminute);
    }
    if(var.second < 10)  {
    printf("0%d",  var.second);
    }
    else {
    printf("%d",  var.second);
    }
    return 0;
}