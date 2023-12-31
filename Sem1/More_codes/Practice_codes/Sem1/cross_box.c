#include <stdio.h>

int main()
{
    int side, i, j;

    /* Input rows and columns from user */
    printf("Enter side of square: ");
    scanf("%d", &side);

    for(i=1; i<=side; i++)
    {
        for(j=1; j<=side; j++)
        {
            if(i == j || (j == (side+1) - i) ||( i == 1 )||( j == 1 )||(i == side)||(j == side))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}