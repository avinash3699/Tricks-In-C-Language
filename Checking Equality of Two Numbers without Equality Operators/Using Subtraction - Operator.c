/*
   Logic : Difference of two equal numbers is 0 which can be denoted as 'false' in conditional statements. 
           Hence else part will be executed printing "Equal".
*/

#include <stdio.h>

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a - b)
        printf("Not Equal");
    else
        printf("Equal");
}
