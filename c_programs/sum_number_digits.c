#include <stdio.h>

/**
 * this program calculates the sum of the first and last digit 
 * of a four digit number
 * main -entry of program
 * Return: always 0 (success)
 */
 int main ()
 {
     int num, firstN, lastN, sum;
     printf("Enter a four digit number: ");
     scanf("%d", &num);
     
     /*calculating*/
     firstN = num/1000;
     lastN = num%10;
     
     sum = firstN + lastN;
     
     printf("The sum of first and last numberof %d is: %d\n", num, sum);
     return 0;
 }
