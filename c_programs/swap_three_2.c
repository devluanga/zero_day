#include <stdio.h>
/**
 * main -program entry
 * this program swaps 3+ numbers using a temp variable
 * Return: always 0 (succes)
 */
 
 int main()
 {
     int a,b,c,d,temp;
     printf("Enter 4 numbers: ");
     scanf("%d%d%d%d", &a, &b, &c, &d);
     
     /*before swap display the numbers*/
     printf("Before swap: \nFirst number: %d\nSecond number: %d\nThird Number: %d\nForth number: %d\n", a,b,c,d);
     /*performing the swap*/
     temp = a, a=b, b=c, c=d, d=temp;
     
     /*after swap, display the result*/
      printf("\nAfter swap: \nFirst number: %d\nSecond number: %d\nThird Number: %d\nForth number: %d\n", a,b,c,d);
 
     return 0;
 }
