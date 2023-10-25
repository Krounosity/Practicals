#include<stdio.h>
int factorial(int n1){
    int fact_num=1;
    for(int i = n1;i>1;i--){
        fact_num = fact_num*i;
    }
    return fact_num;
}

int main(){
    int num;
    int strong_num=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int length;
    printf("Enter the length of the number: ");
    scanf("%d",&length);
    int temp = num;
    for(int i = 0;i<length;i++){
        strong_num = strong_num + factorial(temp%10);
        temp=temp/10;
    }
    printf("Your number --> %d and every digit's factorial's sum --> %d.\n",num,strong_num);
    if(num==strong_num){
        printf("Strong number hai.\n");
    }
    else{
        printf("Strong number nahi hai.\n");
    }
    return 0;
}