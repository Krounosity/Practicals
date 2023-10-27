#include <stdio.h>
#define Varnan 1000
int main()
{
    float arr[Varnan], num_find;
    int len_arr,flag=0;
    printf("Enter the length of your array: ");
    scanf("%d",&len_arr);
    for(int i = 1; i<=len_arr;i++){
        printf("Enter element %d: ",i);
        scanf("%f",&arr[i-1]);
    }
    printf("Enter the number you want to find: ");
    scanf("%f",&num_find);
    for(int j=1;j<=len_arr;j++){
        if(arr[j-1]==num_find){
            flag++;
            printf("Your element is present in the array at position %d.\n",j);
            break;
        }
    }
    if(flag==0){
        printf("Your element is not present in the array.\n");
    }
    return 0;
}
