#include <stdio.h>
#include <math.h>

int main()
{
    int option, len_num, number_1, number_2, number_3;
    printf("Welcome to Number identifier.\n");
    printf("1) Armstrong number Identifier\n");
    printf("2) Prime Number Identifier\n");
    printf("3) Square root finder.\n");
    printf("Please enter your desired option--> ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Welcome to the Armstrong Number Identifier.\n How long is your number?-->");
        scanf("%d", &len_num);
        printf("Please enter the number -->");
        scanf("%d", &number_1);
        int num_armstrong = 0;
        int temp = number_1;
        for (int i = 0; i < len_num; i++)
        {
            num_armstrong = num_armstrong + pow((temp % 10), len_num);
            temp = temp / 10;
        }
        if (num_armstrong == number_1)
        {
            printf("Yes! Your number is an Armstrong Number!.");
        }
        else
        {
            printf("No. Your number is not an Armstrong Number.");
        }
        break;

    case 2:
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
        break;

    case 3:
        printf("Welcome to the Square Root Finder.\n Please enter a number-->");
        scanf("%d", &number_3);
        float sq_root = sqrt(number_3);
        printf("The square root of your given number is %lf.", sq_root);
        break;

    default:
        printf("Enter a valid option.");
        break;
    }

    printf("\nThank you!");
    return 0;
}
