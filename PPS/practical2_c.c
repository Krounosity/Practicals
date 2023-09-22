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
        printf("\nYou are a child. You are ineligible to vote. You have to wait %d years to vote.\n", 18 - age);
    }
    else if (age >= 12 && age <= 17)
    {
        printf("\nYou are a teen. You are ineligible to vote. You have to wait %d years to vote.\n", 18 - age);
    }
    else if (age >= 18 && age <= 19)
    {
        printf("\nYou are a teen. You are eligible to vote. Your vote matters.\n");
    }
    else if (age >= 20 && age <= 64)
    {
        printf("\nYou are an adult. You are eligible to vote. Your vote matters.\n");
    }
    else
    {
        printf("\nYou are a senior. You are eligible to vote. Your vote matters.\n");
    }

    return 0;
}
