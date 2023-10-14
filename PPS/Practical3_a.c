#include <stdio.h>

int main()
{
	int num1, num2, sum = 0, temp;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 % 2 == 0)
	{
		if (num2 % 2 == 0)
		{
			for (int i = num1; i <= num2; i = i + 2)
			{
				sum = sum + i;
			}
		}
		else
		{
			for (int i = num1; i <= (num2 - 1); i = i + 2)
			{
				sum = sum + i;
			}
		}
	}
	else
	{
		if (num2 % 2 == 0)
		{
			for (int i = (num1 + 1); i <= num2; i = i + 2)
			{
				sum = sum + i;
			}
		}
		else
		{
			for (int i = num1 + 1; i <= (num2 - 1); i = i + 2)
			{
				sum = sum + i;
			}
		}
	}
	printf("The sum of the even numbers between and including %d and %d is %d.\n", num1, num2, sum);
	return 0;
}
