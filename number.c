#include <stdio.h>

int		main()
{
	int input;
	int number;
	int i;
	float result;

	number = 10;
	i = 0;
	do
	{
		printf("Enter number: ");
		scanf("%d", &input);
		result += input;
	}
	while (++i < number);
	{
		printf("The mean of entered numbers is: %.2f\n", result/i);
	}
	return 0;
}

