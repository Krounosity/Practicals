#include<stdio.h>
int times;
int Fibonacci(int n1,int n2){
    while(times>2){
        int n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
        times--;
        Fibonacci(n1,n2);
    }
}
int main(){
    printf("Enter the number of terms of the Fibonacci sequence that you want: ");
    scanf("%d",&times);
    printf("0 1 ");
    Fibonacci(0,1);
    return 0;
}