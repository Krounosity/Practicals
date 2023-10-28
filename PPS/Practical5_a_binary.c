#include<stdio.h>
#define MAX 1000

int main(){
	float arr[MAX],search;
	int length;
	printf("Enter the length your array: ");
	scanf("%d",&length);
	printf("Enter the array in ascending order: ");
	for(int i=0;i<length;i++){
		printf("Enter element at position %d: ",i);
		scanf("%f",&arr[i]);
	}
	printf("Enter the element you want to find: ");
	scanf("%f",&search);
	int first = 0;
	int last = length-1;
	while(first<=last){
		int middle= (first+last)/2;
		if(arr[middle]==search){
			printf("Your element is at location %d. (The first position being zero)\n",middle);
			break;
		}
		else if(arr[middle]>search){
			last=middle-1;
		}
		else if(arr[middle]<search){
			first=middle+1;
		}
	}
	if(first>last){
		printf("Your element is not present in the array.\n");
	}
	return 0;
}
