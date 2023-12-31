#include <stdio.h>

int main()
{
    // initializing the side of a cube
    float side;

    // taking the length of the side of the cube
    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);

    // returning the volume of the cube , rounding up to the second decimal
    printf("\nThe volume of the given cube is %.2lf.\n", (side * side * side));

    return 0;
}
