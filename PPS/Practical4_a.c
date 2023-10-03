#include <stdio.h>

int main()
{
    int option;
    printf("Welcome to Number identifier.\n Please enter your desired option:\n1) Armstrong number Identifier\n2) Prime Number Identifier\n3) Square root finder.");
    scanf("%d", &option);
    if (option == 1)
    {
        int number_1;
        printf("Welcome to the Armstrong Number Identifier\n Please enter a number-->");
        scanf("%d", &number_1);
    }
    else if (option == 2)
    {
        int number_2;
        printf("Welcome to the Prime Number Identifier.\n Please enter a number-->");
        scanf("%d", &number_2);
    }
    else if (option == 3)
    {
        int number_3;
        printf("Welcome to the Square Root Finder.\n Please enter a number-->");
        scanf("%d", &number_3);
    }
    return 0;
}