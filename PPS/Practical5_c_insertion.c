#include<stdio.h>
#define MAX 1000
int main(){
    float arr[MAX];
    int length;
    printf("Enter the length of your array: ");
    scanf("%d",&length);
    for(int i =0;i<length;i++){
        printf("Enter element %d: ",i+1);
        scanf("%f",&arr[i]);
    }
    //insertion sorting
   int i, k, j;
    for (i = 1; i < length; i++) 
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
    
    for(int i=0;i<length;i++)
    {
        printf("%f ",arr[i]);
    }
    return 0;
}