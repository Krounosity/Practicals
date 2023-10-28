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
    float smallest;
    int position =0;
    for(int j=0;j<length;j++){
        smallest=arr[j];
        for(int k=j;k<length;k++){
            if(arr[k]<smallest){
                smallest=arr[k];
                position=k;
            }
        }

        if(arr[position]<arr[j]){int temp=arr[j];
        arr[j]=arr[position];
        arr[position]=temp;}
    }
    for(int i=0;i<length;i++)
    {
        printf("%f ",arr[i]);
    }
    return 0;
}