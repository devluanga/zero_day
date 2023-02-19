#include <stdio.h>

/**
 * this program swaps three numbers without using third 
 * value
 * main -entry to program
 * Return: always 0 (success)
 */
 int main()
 {
     int x, y,z;
     printf("Enter two numbers: ");
     scanf("%d%d%d", &x, &y,&z);
     /**
      * lets dispaly the numbers before swap
      */
      printf("Before swap:\nFirst number: %d\nSecond number: %d\nThird number: %d\n", x, y, z);
      /* swaping*/
      x=y+x+z;
      y=x -(y+z);
      z=x- (y+z);
      x = x-(y+z);
      
      /**
       * dispaly result after swapping
       */
       printf("\nAfter swap:\nFirst number: %d\nSecond number: %d\nThird number: %d\n", x, y, z);
       
       return 0;
       
 }
