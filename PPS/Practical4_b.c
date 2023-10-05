#include <stdio.h>

int main()
{
    int option;
    printf("Welcome to the Check-inator! Please select an option:\n1)Vowel Checker.\n2) Leap Year Checker.\n3)Even Number Checker.\n-->");
    scanf("%d", &option);
    if (option == 1)
    {
        char letter;
        printf("Welcome to the Vowel Checker! Enter a character--> ");
        scanf(" %c", &letter);
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            printf("Your letter is a vowel!\n");
        }
        else
        {
            printf("Your letter is not a vowel.\n");
        }
    }
    else if (option == 2)
    {
        int year;
        printf("Welcome to the Leap Year Checker! Please enter a year --> ");
        scanf("%d", &year);
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            printf("Yes the year is a leap year!\n");
        }
        else
        {
            printf("No. The year is not a leap year.\n");
        }
    }
    else if (option == 3)
    {
        int num;
        printf("Welcome to the Even Number Checker! Please enter a number -->");
        scanf("%d", &num);
        int result = (num % 2 == 0) ? 1 : 0;
        if (result == 0)
        {
            printf("Your number is an Odd Number.\n");
        }
        else
        {
            printf("Your number is an Even Number.\n");
        }
    }
    else
    {
        printf("Please enter a valid option\n");
    }
    printf("Thank you!");
    return 0;
}