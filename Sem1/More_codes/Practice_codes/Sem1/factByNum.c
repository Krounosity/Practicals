#include<stdio.h>

int factorial(int fact, int number){
    fact *= number;
    if(number >1){
        factorial(fact , number-1);
    } else {
        return fact;
    }
}

int main(){
    int end_num;
    printf("Enter end number: ");
    scanf("%d",&end_num);

    int sum = 0;

    for(int i = 1; i<=end_num; i++){
        sum = sum + (factorial(1,i)/i);
    }

    printf("%d",sum);
    return 0;
}