// Logic : XOR Operator returns 0 for equal numbers and 1 for unequal numbers

#include <stdio.h>

void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a ^ b)
        printf("Not Equal");
    else
        printf("Equal");
}
