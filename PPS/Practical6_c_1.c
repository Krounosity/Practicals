#include<stdio.h>
int rev=0;
int reverse(int number){
    if(number!=0){
        int temp=number%10;
        rev = (rev*10)+temp;
        number=number/10;
        reverse(number);
    }
    else{
        return rev;
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    reverse(num);
    printf("The reverse of the given number is %d.\n",rev);
}