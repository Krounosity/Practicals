#include <stdio.h>
#include <math.h>

int main()
{
    int option;
    printf("Welcome to Number identifier.\n Please enter your desired option:\n1) Armstrong number Identifier\n2) Prime Number Identifier\n3) Square root finder.\n--> ");
    scanf("%d", &option);
    if (option == 1)
    {
        int len_num, number_1;
        printf("Welcome to the Armstrong Number Identifier.\n How long is your number?-->");
        scanf("%d", &len_num);
        printf("Please enter the number -->");
        scanf("%d", &number_1);
        int num_armstrong = 0;
        int temporary = number_1;
        for (int i = 0; i < len_num; i++)
        {
            num_armstrong = num_armstrong + pow((temporary % 10), 3);
            temporary = temporary / 10;
        }
        if (num_armstrong == number_1)
        {
            printf("Yes! Your number is an Armstrong Number!.");
        }
        else
        {
            printf("No. Your number is not an Armstrong Number.");
        }
    }
    else if (option == 2)
    {
        long int number_2;
        printf("Welcome to the Prime Number Identifier.\n Please enter a number-->");
        scanf("%d", &number_2);
        int divisor = 2;
        int flag = 0;
        for (divisor = 2; divisor < number_2; divisor++)
        {
            if (number_2 % divisor == 0)
            {
                flag++;
            }
            else
            {
                break;
            }
        }
        if (flag == 0)
        {
            printf("Yes! Your number is a Prime Number!");
        }
        else
        {
            printf("No. Your number is not a Prime Number.");
        }
    }
    else if (option == 3)
    {
        int number_3;
        printf("Welcome to the Square Root Finder.\n Please enter a number-->");
        scanf("%d", &number_3);
        float sq_root = sqrt(number_3);
        printf("The square root of your given number is %lf.", sq_root);
    }
    else
    {
        printf("Enter a valid option.");
    }
    printf("\nThank you!");
    return 0;
}