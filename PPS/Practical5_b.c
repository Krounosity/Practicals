	#include<stdio.h>
	#define MAX 1000
	int main(){
		int length;
		float arr[MAX][MAX];
		printf("The given matrix should be a square matrix.\n");
		printf("Enter the length of the matrix: ");
		scanf("%d",&length);
		printf("Enter the elements in the array from left to right and top to bottom: \n");
		printf("The first position being (0,0):\n");
		for(int i = 0;i<length;i++){
			for(int j=0;j<length;j++){
				printf("Enter element at position %d %d: ",i,j);
				scanf("%f",&arr[i][j]);
			}
		}
		//Printing lower triangular matrix of the given matrix.
		printf("The lower triangular matrix of the given matrix is: \n");
		for(int i = 0;i<length;i++){
			for(int j=0;j<length;j++){
				if(i>=j){
					printf("%.2f  ",arr[i][j]);
					}
				else{
					printf("0.00  ");
				}
			}
			printf("\n");
		}
		float principle_sum=0;
		float secondary_sum=0;
		for(int i=0;i<length;i++){
				principle_sum+=arr[i][i];
		}
		for(int i=0;i<length;i++){
			if(length-1-i<=i){secondary_sum+=arr[i][length-1-i];}
		}
		printf("\nThe sum of \n1) Principle diagonal elements is %.2f, and \n2) Secondary diagonal elements is %.2f.\n",principle_sum,secondary_sum);
		return 0;	
	}
