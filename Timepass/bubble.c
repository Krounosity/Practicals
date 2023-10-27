#include <stdio.h>
int main()
{
    int arr[100],temp,n;
    printf("enter the no of elements \n");
    scanf("%d",&n);
    printf("enter the elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("the sorted array is:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return(0);
}