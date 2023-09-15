#include <stdio.h>

int main()
{
    // intializing the three numbers
    float num1, num2, num3;
    // taking the value of number 1 from user
    printf("Enter number 1: ");
    scanf("%f", &num1);

    // taking the value of number 2 from user
    printf("Enter number 2: ");
    scanf("%f", &num2);

    // taking the value of number 3 from user
    printf("Enter number 3: ");
    scanf("%f", &num3);

    // printing the value of the average of the three, upto two decimal places
    printf("The average of the three numbers is %.2lf.", (num1 + num2 + num3) / 3);

    return 0;
}
