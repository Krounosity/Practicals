#include <stdio.h>

int main()
{
    int lines;
    printf("Enter the number of floors of the inverse asterisk tower: ");
    scanf("%d", &lines);
    printf("\n");
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < (lines - i); ++j)
        {
            printf("*");
        }
        for (int k = 0; k < (2 * i); k++)
        {
            printf(" ");
        }
        for (int l = 0; l < (lines - i); ++l)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}