#include<iostream>
#include<stdio.h>


int main()
{
    setlocale(0, "");

    printf("Kakaia smena 1 or 2?\n");
    int answer;
    int answer1;
    int answer3;

    scanf("%d", &answer);
    switch(answer) {

    case 1: printf("1 smena\n"); 
               printf(" viberite yrok 1 - 6 \n");
         scanf("%d", &answer1);
        switch(answer1)
        {
            case 1: printf(" 1 yrok - 8:00"); break;
            case 2: printf(" 2 yrok - 8:50"); break;
            case 3: printf(" 3 yrok - 9:50"); break;
            case 4: printf(" 4 yrok - 10:50"); break;
            case 5: printf(" 5 yrok - 11:50"); break;
            case 6: printf(" 6 yrok - 12:40"); break;
        }
    break;

     case 2: printf("2 smena\n"); 
           printf(" viberite yrok 1 - 6 \n");
         scanf("%d", &answer3);
        switch(answer3)
        {
            case 1: printf(" 1 yrok - 14:00"); break;
            case 2: printf(" 2 yrok - 15:50"); break;
            case 3: printf(" 3 yrok - 16:50"); break;
            case 4: printf(" 4 yrok - 17:50"); break;
            case 5: printf(" 5 yrok - 18:50"); break;
            case 6: printf(" 6 yrok - 19:40"); break;
        }
    break;
       

    
  
    
    default: printf("Eror\n");
    }

    return 0;
}