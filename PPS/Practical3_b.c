#include <stdio.h>

int main()
{
    int num_1 = 0, num_2 = 1, temporary = 0, num, i = 0;
    printf("Enter the number of elements you want in the Fibonacci series: ");
    scanf("%d", &num);
    printf("0 1 ");
    do
    {
        temporary = num_1 + num_2;
        printf("%d ", temporary);
        num_1 = num_2;
        num_2 = temporary;
        temporary = 0;
        i++;
    } while (i < num - 2);
    return 0;
}