#include <stdio.h>

int main ()
{
printf("This script is for operations in c\n _____________________________\n");

//variable initialization and definition
int a = 20;
int b = 30;
int c;

// operations
c = a+b;
printf("The sum of %d and %d is:\n %d \n", a,b,c);
c = a-b;
printf("The difference of %d and %d is:\n %d \n", a,b,c);
c = a/b;
printf("The quotient of %d and %d is:\n %d \n", a,b,c);
c = a*b;
printf("The product of %d and %d is:\n %d \n", a,b,c);
c = a%b;
printf("The remainder between the divsion of %d and %d is:\n %d \n", a,b,c);


return 0;

}
