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
    for(int j=0;j<length;j++){
        int k=j;
        while(k>0 && arr[k]<arr[k+1]){
            int temp=arr[k];
            arr[k]=arr[k+1];
            arr[k+1]=temp;
            k--;
        }
    }
    for(int i=0;i<length;i++)
    {
        printf("%f ",arr[i]);
    }
    return 0;
}