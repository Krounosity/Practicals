#include <stdio.h>
#define MAX 1023
int length;
int array[MAX];
void merge_sort(int low, int high);
void merge(int low, int middle, int high);
int main(){
    printf("What is the length of the array?");
    scanf("%d",&length);
    printf("Enter the numbers in the array.\n");
    for(int i=0;i<length;i++){
        scanf("%d",&array[i]);
    }
    merge_sort(0,length);
    for(int w=1;w<=length;w++){
        printf("%d ",array[w]);
    }
}

void merge_sort(int low, int high){
    if(low<high){
        int middle = (low+high)/2;
        merge_sort(low, middle);
        merge_sort(middle+1, high);
        merge(low, middle, high);
    }
}

void merge(int low, int middle, int high){
    int i=low;
    int j=middle+1;
    int k=low;
    int temp[MAX];
    while((i<=middle) && (j<=high)){
        if(array[i]<=array[j]){
            temp[k++]=array[i++];
        }
        else{
            temp[k++]=array[j++];
        }
    }
    while(i<=middle){
        temp[k++]=array[i++];
    }
    while(j<=high){
        temp[k++]=array[j++];
    }
    for(int v=low; v<=high; v++){
        array[v]=temp[v];
    }
}