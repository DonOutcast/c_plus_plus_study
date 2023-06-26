#include <stdio.h>
int main() {

    int chislo=0;
    int delitel=1;
    
    printf("number?\n");
    scanf("%d",&chislo);
     
     do { 
        
    if(chislo%delitel==0) {
        printf("%d\n",delitel); 
        }
    delitel++;
    }
    while(chislo>=delitel);
    
    return 0;
    }
    
 
    
        
        

    
