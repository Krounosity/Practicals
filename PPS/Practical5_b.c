#include <stdio.h>

int main()
{
	int side;
	int sum = 0;
	printf("Welcome to the lower triangular matrix creator! Please enter the length of the side of your matrix: ");
	scanf("%d", &side);
	int matrix[side - 1][side - 1];
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("Please enter element with index %d,%d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int k = 0; k < side; k++)
	{
		sum = sum + matrix[k][k];
	}
	printf("The sum of the diagonal elements of your matrix is %d.\n", sum);
	return 0;
}
