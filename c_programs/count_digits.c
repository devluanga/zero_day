#include <stdio.h>

int main()
{
	int num, digit=0;
	
	printf("Enter the number: ");
	scanf("%d", &num);

	while(num!= 0)
	{
		digit++;
		num /=10;


	}
	printf("%d digits\n", digit);

	return 0;


}
