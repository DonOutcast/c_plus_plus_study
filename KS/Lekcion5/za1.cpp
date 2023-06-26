
#include<iostream>
#include<stdio.h>


int main()
{
    setlocale(0, "");

    printf("kto iavliaetsa avtorom iazika C++ ,1. James Gosling, 2. Bern Strastrup, 3. Denis Ritchi  \n");
    int answer;

    scanf("%d", &answer);
    switch(answer) {

    case 1: printf("James Gosling\n");
    if(answer == 1){printf("verno\n");} break;
    case 2: printf("Bern Strastrup\n"); 
    if(answer == 2){printf("Oshibka\n");} break;
    case 3: printf("Denis Ritchi\n"); 
    if(answer == 3){printf("Oshibka\n");} break;
    
    
    default: printf("Eror\n");
    }

    return 0;
}