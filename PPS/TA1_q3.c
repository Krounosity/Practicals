#include <stdio.h>

int main()
{
    int rows, i, j, k, l;
    printf("Welcome to the number triangle maker! Please enter the number of rows you desire: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", j);
        }
        for (l = i - 1; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}