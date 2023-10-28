#include<stdio.h>
#define MAX 1000
int main(){
	//Linear search program
	float arr[MAX],search;
	int length;
	//Asking for array length
	printf("Enter the length of your array: ");
	scanf("%d",&length);
	//Taking array elements
	for(int i =0;i<length;i++){
		printf("Enter element %d:",i+1);
		scanf("%f",&arr[i]);
	}
	//Asking for the number which is to be searched in the array
	printf("Enter the number you want to find in the array: ");
	scanf("%f",&search);
	//Searching linearly for the given number
	int flag=0;
	for(int j=0;j<length;j++){
		if(arr[j]==search){
			printf("Yes! The given element is present in the array. It is at position %d (The first position being 1).\n",j+1);
			flag++;
			break;
		}
	}
	if(flag==0){
		printf("Sorry, your element is not present in the array.\n");
	}
	return 0;
}
