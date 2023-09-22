#include <stdio.h>

int main()
{
    // initializing the temperature variables in fahrenheit and celsius
    float fahrenheit, celsius;

    // taking temperature in fahrenheit as input
    printf("Enter your temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    // calculating temperature in celsius
    celsius = ((fahrenheit-32)*5)/9;

    // returning the temperature in celsius till two decimal places
    printf("\nThe temperature in celsius is %.2lf.\n", celsius);
    return 0;
}
