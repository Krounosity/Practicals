#include <stdio.h>
#define MAX 100000

int main()
{
    int option, nat_num, count = 0, dimension = 0, i = 0, j = 0, k = 0, l = 1, flag = 0;
    float sides[3];
    int factors[MAX], matrix[dimension][dimension];
    printf("Welcome! Please enter the desired option:\n1)Triangle Type Finder.\n2)Factor Finder.\n3)Identity Matrix Checker.\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Welcome to the Triangle Type Finder.");
        for (int k = 0; k < 3; k++)
        {
            printf("Please enter side %d: ", k + 1);
            scanf("%f", &sides[k]);
        }
        if (sides[0] == sides[1] == sides[2])
        {
            printf("The triangle is an quilateral triangle.");
        }
        else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2])
        {
            printf("The triangle is an isosceles triangle.");
        }
        else
        {
            printf("The triangle is a scalene triangle");
        }
        break;
    case 2:
        printf("Welcome to the Factor Finder. Please enter a natural number: ");
        scanf("%d", &nat_num);
        for (int l = 1; l <= nat_num; l++)
        {
            if (nat_num % l == 0)
            {
                factors[count] = l;
                count++;
            }
            else
            {
                continue;
            }
        }
        printf("The factors of %d are: ", nat_num);
        for (int i = 0; i < count; i++)
        {
            printf("%d ", factors[i]);
        }
        break;

    case 3:
        printf("Welcome to the Identity Matrix Checker. Enter the length of the side of your matrix: ");
        scanf("%d", &dimension);
        for (i = 0; i < dimension; i++)
        {
            for (j = 0; j < dimension; j++)
            {
                printf("Please enter element number %d %d: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
        }
        for (int i = 0; i < dimension; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i == j)
                {
                    if (matrix[i][j] != 1)
                    {
                        flag++;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    if (matrix[i][j] != 0)
                    {
                        flag++;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        if (flag == 0)
        {
            printf("Your matrix is an identity matrix.\n");
        }
        else
        {
            printf("Your matrix is not an identity matrix.\n");
        }
        break;
    default:
        printf("Please enter a valid option.\n");
    }
    printf("\nThank you!\n");
    return 0;
}