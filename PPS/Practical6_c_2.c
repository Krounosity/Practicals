#include<stdio.h>
int i=2;
int gcd=1;
int hcf(int number1, int number2){
    if(i<=number1&&i<=number2){
        if(number1%i==0 && number2%i==0){
            gcd=i;
        }
        i++;
        hcf(number1,number2);
    }
}
int main(){
    int num1=0,num2=0;
    printf("Enter two numbers seperated by a space: ");
    scanf("%d %d",&num1,&num2);
    hcf(num1,num2);
    printf("The GCD or HCF of %d and %d is %d",num1,num2,gcd);
    return 0;
}