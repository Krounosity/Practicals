#include<stdio.h>
#define MAX 100
int main(){
    float array_num[MAX], remv, length_arr;
    printf("How long is your array? -->");
    scanf("%f",&length_arr);
    for(int i = 0; i<length_arr;i++){
        printf("Enter array element %d: ",i+1);
        scanf("%f",&array_num[i]);
    }
    printf("Enter element value to be removed: ");
    scanf("%f",&remv);
    for(int j=0;j<length_arr;j++){
            if(array_num[j]==remv){
                for(int k=j;k<=length_arr;k++){
                    array_num[k]=array_num[k+1];
                }
            }
    }
    length_arr--;
    printf("The array is: ");
    for(int k=0;k<length_arr;k++){
        printf("%f ",array_num[k]);
    }
    return 0;
}