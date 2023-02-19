#include <stdio.h>

/**
 * this program swaps two numbers without using third 
 * value
 * main -entry to program
 * Return: always 0 (success)
 */
 int main()
 {
     int x, y;
     printf("Enter two numbers: ");
     scanf("%d%d", &x, &y);
     /**
      * lets dispaly the numbers before swap
      */
      printf("Before swap:\nFirst number: %d\nSecond number: %d\n", x, y);
      /* swaping*/
      y=x+y;
      x=y-x;
      y=y-x;
      
      /**
       * dispaly result after swapping
       */
       printf("\nAfter swap:\nFirst number: %d\nSecond number: %d\n", x, y);
       
       return 0;
       
 }
