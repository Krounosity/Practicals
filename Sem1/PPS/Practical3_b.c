#include <stdio.h>

int main()
{
    int num_1 = 0, num_2 = 1, temp = 0, num, i = 0;
    printf("Enter the number of elements you want in the Fibonacci series: ");
    scanf("%d", &num);
    printf("%d %d ", num_1, num_2);
    do
    {
        temp = num_1 + num_2;
        printf("%d ", temp);
        num_1 = num_2;
        num_2 = temp;
        temp = 0;
        i++;
    } while (i < num - 2);
    return 0;
}