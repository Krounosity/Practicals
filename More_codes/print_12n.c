#include<stdio.h>
void increasing(int p, int n){
    if(n!=0){
        printf("%d ",p);
        increasing(p+1,n-1);
    }
    else {printf("\n");}
}

int main(){
    int number;
    printf("Enter the last number you want in the series: ");
    scanf("%d",&number);
    increasing(1,number);
    return 0;
}