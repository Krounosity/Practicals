#include <stdio.h>

int main()
{
    // initializing the age from the user as an integer
    int age;

    // taking the age from the user as an integral value
    printf("\nEnter your age in years: ");
    scanf("%d", &age);

    // returning condition specific statements
    if (age >= 0 && age <= 12)
    {
        printf("\nYour age is %d you are a child and are ineligible to vote for another %d years.\n", age, 18 - age);
    }
    else if (age >= 12 && age <= 17)
    {
        printf("\nYour age is %d, you are a teenage and are ineligible to vote for another %d years.\n", age, 18 - age);
    }
    else if (age >= 18 && age <= 19)
    {
        printf("\nYour age is %d, you are a teenager and are eligible to vote. Your vote matters.\n", age);
    }
    else if (age >= 20 && age <= 64)
    {
        printf("\nYour age is %d, you are an adult and are eligible to vote. Your vote matters.\n", age);
    }
    else
    {
        printf("\nYour age is %d, you are a senior and are eligible to vote. Your vote matters.\n", age);
    }

    return 0;
}
