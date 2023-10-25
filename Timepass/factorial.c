#include<stdio.h>

int main(){
    int num;
    int fact_num=1;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=num;i>1;i--){
        fact_num = fact_num*i; 
    }
    printf("The factorial of the number is %d.\n",fact_num);
    return 0;
}