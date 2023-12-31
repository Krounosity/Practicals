#include <stdio.h>

int main()
{
    // intializing the sides of a triangle
    float side1, side2, side3;

    // taking side 1 as input from user
    printf("Enter side 1: ");
    scanf("%f", &side1);

    // taking side 2 as input from user
    printf("Enter side 2: ");
    scanf("%f", &side2);

    // taking side 3 as input from user
    printf("Enter side 3: ");
    scanf("%f", &side3);

    // checking conditions and returning specific outputs
    if ((side1 + side2) > side3 && (side3 + side2) > side1 && (side1 + side3) > side2)
    {
        printf("\nYour triangle is valid.\n");
    }
    else
    {
        printf("\nYour triangle is invalid.\n");
    }

    return 0;
}
