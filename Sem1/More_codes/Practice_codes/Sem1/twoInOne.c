#include<stdio.h>
void sort(int array1[], int array2[], int length1, int length2);

int new_arr[200], new = 0;

int main(){
    int len1 = 7; //Can ask from user.
    int len2 = 6; //Can ask from user.
    int arr1[100] = {1,2,3,5,7,9,55}; //Can take from user.
    int arr2[100] = {0,4,6,52,58,64}; //Can take from user.
    sort(arr1,arr2, len1, len2);
    for(int f = 0; f<len1+len2; f++){
        printf("%d ",new_arr[f]);
    }
}

void sort(int array1[100], int array2[100], int length1, int length2){
    int i = 0, j = 0;
    while(i<=length1-1 && j<=length2-1){
        if(array1[i]>array2[j]){
            new_arr[new] = array2[j];
            j++;
        } else {
            new_arr[new] = array1[i];
            i++;
        }
        new++;
    }
    for(; i<length1; i++){
      new_arr[new] = array1[i];
      new++;
    }
    
    for(; j<length2; j++){
        new_arr[new] = array2[j];
        new++;
    }
}