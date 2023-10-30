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
        position=j;
        for(int k=j+1;k<length;k++){
            if(arr[k]<arr[position]){
                position=k;
            }
        }
        if(arr[position]<arr[j]){float temp=arr[j];
        arr[j]=arr[position];
        arr[position]=temp;}
    }
    for(int i=0;i<length;i++)
    {
        printf("%f ",arr[i]);
    }
    return 0;
}