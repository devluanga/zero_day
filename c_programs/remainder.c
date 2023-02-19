#include <stdio.h>
/**
 * main -program entry
 * this program swaps 3+ numbers using a temp variable
 * Return: always 0 (succes)
 */
 
 int main()
 {
    int num, d, rem;
    printf("Enter the number and the divisor: ");
    scanf("%d%d", &num, &d);
    
    while (num >= d)
    {
        num = num-d;
    }
    rem = num;
    printf("Remainder of division between %d and %d is %d\n", num, d, rem);
 
     return 0;
 }
