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
		for(int j=0;j<=i;j++){
			printf("%f  ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
