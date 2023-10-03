#include <stdio.h>
int main()
{
    int rowB;
    printf("Enter the position of the longest row (the first row position being 1): ");
    scanf("%d", &rowB);
    for (int upper = 0; upper < rowB; upper++)
    {
        for (int j = (rowB - upper); j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < upper; k++)
        {
            printf("%c", 65 + k);
        }
        for (int l = upper; l >= 0; l--)
        {
            printf("%c", 65 + l);
        }
        printf("\n");
    }
    for (int lower = (rowB - 2); lower >= 0; lower--)
    {
        for (int i = 0; i < rowB - lower; i++)
        {
            printf(" ");
        }
        for (int letters = 0; letters < lower; letters++)
        {
            printf("%c", 65 + letters);
        }
        for (int m = lower; m >= 0; m--)
        {
            printf("%c", 65 + m);
        }
        printf("\n");
    }
}