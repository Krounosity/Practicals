#include<stdio.h>

int main(){
	int num1, num2;
	printf("Enter two numbers separated by a space: ");
	scanf("%d %d",&num1,&num2);
	int *pnum1 , *pnum2;
	pnum1 = &num1; pnum2=&num2;
	printf("The sum of %d and %d is %d.\n",*pnum1,*pnum2,*pnum1+*pnum2);
	printf("The difference between %d and %d is %d.\n",*pnum1,*pnum2,*pnum1-*pnum2);
	printf("The product of %d and %d is %d.\n",*pnum1,*pnum2,(*pnum1)*(*pnum2));
	printf("The quotient of %d and %d is %d.\n",*pnum1,*pnum2,(*pnum1)/(*pnum2));	
}
