#include <stdio.h>

int main(){
    int num1,num2;
    int temp=0;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    if(num1<num2){
        temp=num1;
        num1=num2;
        num2=temp;
    }
    int max=num1;
    while(1){
        if(max%num1==0 && max%num2==0){
            printf("The lcm of %d and %d is %d.\n",num1,num2,max);
            break;
        }
        max++;
    }
    
    return 0;
}