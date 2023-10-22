#include <stdio.h>

int main()
{
    int length_arr = 0, array_num[length_arr], num_find;
    printf("Hi! What is the length of your array? --> ");
    scanf("%d", &length_arr);
    for (int i = 0; i < length_arr; i++)
    {
        printf("Enter number %d: \n", i + 1);
        scanf("%d", &array_num[i]);
    }
    printf("What is the number that you want to find? --> ");
    scanf("%d", &num_find);
    int flag = 0;
    for (int j = 0; j < length_arr; j++)
    {
        if (array_num[j] == num_find)
        {
            flag++;
            break;
        }
        else
        {
            continue;
        }
    }
    if (flag > 0)
    {
        printf("Yes! Your number is present in the array!.\n");
    }
    else
    {
        printf("No. Your number is not present in the array.\n");
    }
    printf("Thank you!");
    return 0;
}
