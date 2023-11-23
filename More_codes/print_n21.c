#include<stdio.h>
int decreasing(int n){
    if(n!=0){
        printf("%d ",n);
        decreasing(n-1);
    }
    else if(n==0){
        printf("\n");
    }
}

int main(){
    int number;
    printf("Enter a positive integer: ");
    scanf("%d",&number);
    decreasing(number);
    return 0;
}