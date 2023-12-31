#include<stdio.h>
int Fibonacci(int n1,int n2, int times){
    if(times>1){
        int n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
        times--;
        Fibonacci(n1,n2,times);
    }
}
int main(){
    int nums;
    printf("Enter the number of terms of the Fibonacci sequence that you want: ");
    scanf("%d",&nums);
    if(nums==0){
        printf("No series\n");
    }
    else if(nums==1){
        printf("0\n");
    }
    else if(nums==2){
        printf("0 1\n");
    }
    else{
        printf("0 1 ");
        Fibonacci(0,1,nums-1);
    }
    return 0;
}