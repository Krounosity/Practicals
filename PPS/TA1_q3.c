#include <stdio.h>

int main()
{
    int rows;
    printf("Welcome to the number triangle maker! Please enter the number of rows you desire: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 0; k < rows - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int l = i - 1; l > 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}