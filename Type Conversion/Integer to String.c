#include <stdio.h>

void main(){
    
    int num = 999;
    char numConverted[4];
    
    sprintf(numConverted, "%d", num);
    
    printf("%s", numConverted);
    
}