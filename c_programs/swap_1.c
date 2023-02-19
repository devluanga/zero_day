#include <stdio.h>

/**
*swap program of two values or numbers using a third variable
*/

int main()
{
    int x, y, temp;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    
    printf("Before swap:\nFirst number: %d\nSecond number: %d\n", x, y);

    /*swap*/
    temp = x;
    x=y;
    y=temp;
    
    printf("After swap:\nFirst number: %d\nSecond number: %d\n", x, y);
    
    return 0;
}
