#include<stdio.h>

int main(){
    //intializing the number
    float number;

    //taking the number from the user
    printf("Enter a number: ");
    scanf("%f",&number);

    //returning condition-specific statements by checking the number's sign
    
    if(number>0){
        printf("The number is a positive number.");
    }else if(number<0){
        printf("The number is a negative number.");
    }else{
        printf("The number is zero.");
    }

    return 0;
}