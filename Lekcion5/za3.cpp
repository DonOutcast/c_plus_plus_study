#include<iostream>
#include<stdio.h>


int main()
{
    setlocale(0, "");

    printf("Kakaia smena 1 or 2?\n");
    int answer;
   

    scanf("%d", &answer);
    switch(answer) {

    case 1: printf("1 avtomobil\n"); 

         printf("Skolko kilometrov?\n");
         scanf("%d", &answer);
         
         answer = answer * 100;
         printf("%d", answer);
        
    break;

     case 2: printf("2 poezd\n");
     
         printf("Skolko kilometrov?\n");
         scanf("%d", &answer);
         
         answer = answer * 150;
         printf("%d", answer);

    break;

    case 3: printf("2 samolet\n"); 

         printf("Skolko kilometrov?\n");
         scanf("%d", &answer);
        
         answer = answer * 200;
         printf("%d", answer);
        
    break;
       
    default: printf("Eror\n");
    }

    return 0;
}