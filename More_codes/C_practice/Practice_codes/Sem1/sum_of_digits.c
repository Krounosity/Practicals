#include<stdio.h>

int sumOfDigits(int sum, int num){
    //Assiging a new variable called "temp" the value of sum.
    int temp = sum;

    //Adding the value of the last digit of variable "num" to temp.
    temp = temp+(num%10);
    
    //If num/10 is strictly greater than zero.
    if(num/10 >0){
    
        //Recursively calling the function with arguments as "temp" and "num/10"
        sumOfDigits(temp,num/10);
    
    } else {
    
        //Returning the value of temp. which is now the value of sum of digits of variable number.
        return temp;
    
    }
}

int main(){

    //Declaring number variable.
    int number;

    //Taking number from user.
    printf("Enter number: ");
    scanf("%d",&number);

    //Calling function to calculate sum of digits and assigning the result to a variable called sum.
    int sum = sumOfDigits(0,number);

    //Printing the sum of digits.
    printf("The sum of digits of the number %d is: %d.\n",number,sum);

    return 0;
}