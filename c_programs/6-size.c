#include <stdio.h>

/**Write a C program that prints the size of various types on the computer it is compiled and run on.

  You should produce the exact same output as in the example
  Warnings are allowed
  */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of a int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu\n", sizeof(float));
	
	return(0);
}
