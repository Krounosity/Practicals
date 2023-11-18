#include<stdio.h>
int number1,number2, i=2,hcf=0;
int gcd(int num1, int num2){
	if(i<=num1 && i<=num2){
		if(num1%i==0 && num2%i==0){
			hcf=i;
		}
			i++;
			gcd(num1,num2);
	}
}

int main(){
	printf("Enter two positive integers separated by a space:");
	number1=0;
	number2=0;
	scanf("%d %d",&number1,&number2);
	gcd(number1,number2);
	printf("The GCD or HCF of %d and %d is %d.\n",number1,number2,hcf);
	return 0;
}